/*
 * Copyright (C) 2016  hedede <haddayn@gmail.com>
 *
 * License LGPLv3 or later:
 * GNU Lesser GPL version 3 <http://gnu.org/licenses/lgpl-3.0.html>
 * This is free software: you are free to change and redistribute it.
 * There is NO WARRANTY, to the extent permitted by law.
 */
#include <aw/fileformat/obj/loader.h>

#include <aw/io/input_stream_utils.h>


#include <aw/types/containers/flat_map.h>

#include <cstdio>
#include <cstdlib>
#include <cassert>

#include "shared.h"

namespace aw {
namespace obj {
namespace {

struct parser {
	mtllib lib;

	material& cur_mtl()
	{
		assert( !lib.mtls.empty() );
		return lib.mtls.back();
	}

	void new_material( string_view rest )
	{
		auto p = string::split_off( rest, ws );
		auto name = p.first;
		if ( name.empty() )
			return;
		lib.mtls.push_back({ (std::string)name });
	}

	void read_ambient( string_view rest );
	void read_diffuse( string_view rest );
	void read_specular( string_view rest );

	void read_ambient_map( string_view rest );
	void read_diffuse_map( string_view rest );
	void read_specular_map( string_view rest );
	void read_bump_map( string_view rest );

	void read_illum( string_view rest );

	void read_dissolve( string_view rest );
	void read_transparency( string_view rest );

	void read_transfer( string_view rest );
	void read_refr_index( string_view rest );
	void read_spec_exponent( string_view rest );

	using func = void(parser::*)(string_view);
	static const flat_map<string_view, func> cmds;

	// it makes no sense to assign values
	// without material, so find it first
	bool find_newmtl( string_view line )
	{
		auto p = string::split_off( line, ws );

		auto cmd  = p.first;
		auto rest = p.second;

		if (cmd.empty() || cmd != "newmtl")
			return false;

		new_material( rest );
		return true;
	}

	void parse_line( string_view line )
	{
		// auto [cmd, rest] = string::split_off( line, ws );
		auto p = string::split_off( line, ws );

		auto cmd  = p.first;
		auto rest = p.second;

		if (cmd.empty() || cmd[0] == '#')
			return;

		auto iter = cmds.find(cmd);
		if (iter == cmds.end())
			return;
		auto func = iter->second;
		(this->*func)( string::rtrim(rest, ws) );
	}

	void parse(io::input_stream& file)
	{
		std::string tmp;

		while (read_until( file, '\n', tmp )) {
			if (find_newmtl( tmp ))
				break;
		}

		while (read_until( file, '\n', tmp )) {
			parse_line( tmp );
		}
	}
};

const flat_map<string_view, parser::func> parser::cmds = {
	{"newmtl",   &parser::new_material},
	{"illum",    &parser::read_illum},
	{"illumination",  &parser::read_illum},
	{"Ka",       &parser::read_ambient},
	{"Kd",       &parser::read_diffuse},
	{"Ks",       &parser::read_specular},
	{"d",        &parser::read_dissolve},
	{"Tr",       &parser::read_transparency},
	{"Tf",       &parser::read_transfer},
	{"Ni",       &parser::read_refr_index},
	{"Ns",       &parser::read_spec_exponent},
	{"bump",     &parser::read_bump_map},
	{"map_bump", &parser::read_bump_map},
	{"map_Ka",   &parser::read_ambient_map},
	{"map_Kd",   &parser::read_diffuse_map},
	{"map_Ks",   &parser::read_specular_map},
};

void parser::read_ambient( string_view rest )
{
	auto& mtl = cur_mtl();
	parse3( rest, mtl.ambient );
}
void parser::read_diffuse( string_view rest )
{
	auto& mtl = cur_mtl();
	parse3( rest, mtl.diffuse );
}
void parser::read_specular( string_view rest )
{
	auto& mtl = cur_mtl();
	parse3( rest, cur_mtl().specular );
}

void read_params( string_view& rest )
{
	while ( !rest.empty() ) {
		if (rest[0] != '-')
			break;
		auto p = string::split_off( rest, ws );
		rest = p.second;
	}
}

void parser::read_ambient_map( string_view rest )
{
	read_params( rest );
	if (rest.empty()) return;
	cur_mtl().ambient_map = std::string(rest);
}
void parser::read_diffuse_map( string_view rest )
{
	read_params( rest );
	if (rest.empty()) return;
	cur_mtl().diffuse_map = std::string(rest);
}
void parser::read_specular_map( string_view rest )
{
	read_params( rest );
	if (rest.empty()) return;
	cur_mtl().specular_map = std::string(rest);
}
void parser::read_bump_map( string_view rest )
{
	read_params( rest );
	if (rest.empty()) return;
	cur_mtl().normal_map = std::string(rest);
}

void parser::read_illum( string_view rest )
{
	parse1( rest, cur_mtl().illumination );
}

void parser::read_dissolve( string_view rest )
{
	parse1( rest, cur_mtl().dissolve );
}

void parser::read_transparency( string_view rest )
{
	double t;
	parse1( rest, t );
	cur_mtl().dissolve = 1 - t;
}

void parser::read_transfer( string_view rest )
{
}

void parser::read_refr_index( string_view rest )
{
	parse1( rest, cur_mtl().optical_density );
}
void parser::read_spec_exponent( string_view rest )
{
	parse1( rest, cur_mtl().specular_exponent );
}
} // namespace

mtllib mtllib::parse( io::input_stream& file )
{
	parser mat;
	mat.parse( file );
	return mat.lib;
}
} // namespace obj
} // namespace aw

#ifdef AW_MANUAL_TEST
#include <aw/io/input_file_stream.h>
#include <iostream>

int main()
{
	using namespace aw;
	io::input_file_stream file{ "sotank.mtl" };

	auto matlib = obj::mtllib::parse( file );

	for (auto& mat : matlib.mtls) {
		std::cout << "newmtl " << mat.name << '\n';
		auto& Ka = mat.ambient;
		auto& Kd = mat.diffuse;
		auto& Ks = mat.specular;
		std::cout << "\tKa " << Ka[0] << ' ' << Ka[1] << ' ' << Ka[2] << '\n';
		std::cout << "\tKd " << Kd[0] << ' ' << Kd[1] << ' ' << Kd[2] << '\n';
		std::cout << "\tKs " << Ks[0] << ' ' << Ks[1] << ' ' << Ks[2] << '\n';

		std::cout << "\td " << mat.dissolve << '\n';
		std::cout << "\tillum " << mat.illumination << '\n';

		std::cout << "\tNi " << mat.optical_density << '\n';
		std::cout << "\tNs " << mat.specular_exponent << '\n';

		if (!mat.ambient_map.empty())
			std::cout << "\tmap_Ka " << mat.ambient_map << '\n';
		if (!mat.diffuse_map.empty())
			std::cout << "\tmap_Kd " << mat.diffuse_map << '\n';
		if (!mat.specular_map.empty())
			std::cout << "\tmap_Ks " << mat.specular_map << '\n';
	}
}
#endif
