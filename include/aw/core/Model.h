/*
 * Copyright (C) 2014  absurdworlds
 *
 * License LGPLv3 or later:
 * GNU Lesser GPL version 3 <http://gnu.org/licenses/lgpl-3.0.html>
 * This is free software: you are free to change and redistribute it.
 * There is NO WARRANTY, to the extent permitted by law.
 */
#ifndef _aw_Model_
#define _aw_Model_
#include <vector>
#include <aw/core/models.h>

namespace aw {

class Model {
public:
	std::vector<Primitive> primitives;
};

} // namespace aw
#endif//_aw_Model_
