/*
 * Copyright (C) 2016  hedede <haddayn@gmail.com>
 *
 * License LGPLv3 or later:
 * GNU Lesser GPL version 3 <http://gnu.org/licenses/lgpl-3.0.html>
 * This is free software: you are free to change and redistribute it.
 * There is NO WARRANTY, to the extent permitted by law.
 */
#ifndef aw_graphics_model_obj_h
#define aw_graphics_model_obj_h
#include <aw/fileformat/obj/loader.h>
#include <aw/graphics/gl/model.h>
#include <map>
#include <tuple>
namespace aw {
namespace gl3 {
model model_from_obj( obj::mesh const& data )
{
	unsigned last_index = 0;
	std::map< std::tuple<unsigned, unsigned>, unsigned > indices;
	std::vector<unsigned> tris;
	std::vector<float> verts;
	std::vector<float> normals;

	auto push = [] (obj::vert const& v, std::vector<float>& c) {
		for (float p : v.points)
			c.push_back(p);
	};

	auto push_normal = [&] (unsigned idx) {
		if (idx == -1) {
			normals.push_back(0);
			normals.push_back(0);
			normals.push_back(0);
		} else {
			push(data.normals[idx], normals);
		}
	};


	for (auto& tri : data.faces) {
		for (auto& [v,n,t] : tri.verts) {
			if (auto p = indices.find({v,n}); p != end(indices)) {
				tris.push_back(p->second);
			} else {
				tris.push_back(last_index);
				indices.insert({{v,n}, last_index++});
				push(data.verts[v], verts);
				push_normal(n);
			}
		}
	}

	size_t n = verts.size();
	std::vector<float> soup;
	soup.reserve(n+n);
       	soup.insert( end(soup), begin(verts),   end(verts) );
	soup.insert( end(soup), begin(normals), end(normals) );

	vert_data vd{ soup, 0, size_t(-1), sizeof(float)*n };
	mesh_data md{ tris };
	return { vd, md };
}
} // namespace gl3
} // namespace aw
#endif//aw_graphics_gl3_program_h
