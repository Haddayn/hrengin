#include <iostream>
#include <iterator>
#include <string>
#include <vector>

#include <aw/io/WriteFile.h>
#include <aw/io/WriteStream.h>
#include <aw/hdf/Writer.h>

using namespace aw;
using namespace io;
using namespace hdf;

/*!
 * \example hdf_writer
 *
 * This file provides an usage example for hdf::Writer,
 * messages.hdf is used as an example document here.
 */

// the struct representing a message
struct Message {
	struct color {
		u8 red;
		u8 green;
		u8 blue;
	} color;
	std::string text;
};

class TestWriteStream : public WriteStream {
public:
	virtual i32 put(char c)
	{
		std::cout.put(c);
		return 0;
	}

	virtual i32 put(std::string str)
	{
		std::cout << str;
		return 0;
	}

	virtual size_t position() const
	{
		return 0;
	}
};

int main(int,char**)
{
	// open a file
	//io::WriteFile file("../../data/misc/messages.hdf", false);
	TestWriteStream stream;
	// create the parser
	hdf::Writer writer {stream};

	using namespace std::string_literals;
	writer.startNode("shape"s);
	hdf::Value type("sphere"s);
	writer.writeValue("type"s,type);
	hdf::Value radius(1.0);
	writer.writeValue("radius"s,radius);
	writer.endNode();
}
