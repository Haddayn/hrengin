/*
 * Copyright (C) 2017  Hedede <haddayn@gmail.com>
 *
 * License LGPLv3 or later:
 * GNU Lesser GPL version 3 <http://gnu.org/licenses/lgpl-3.0.html>
 * This is free software: you are free to change and redistribute it.
 * There is NO WARRANTY, to the extent permitted by law.
 */
#ifndef aw_on_static_helpers_h
#define aw_on_static_helpers_h
#include <utility>
#include <aw/types/non_copyable.h>
#include <aw/utility/static_object.h>
namespace aw {
/*!
 * Calls the Function when object of this calss is instantiated.
 *
 * Use-case: see aw::archive
 */
template<auto Function>
struct call_in_ctor {
	call_in_ctor()
	{
		Function();
	}
};

namespace _impl {
template<typename T>
struct instantiator {
	static auto instantiate() { return static_object<T>::instance(); }
};
} // namespace _impl

/*!
 * Forces instantiation of a static object when referenced.
 */
template<typename T>
using force_instantiation = decltype(_impl::instantiator<T>::instantiate());

template<typename T>
class instantiate_type {
	instantiate_type();
	using dummy = force_instantiation<T>;
};

template<auto Function>
using force_call_on_init = force_instantiation<call_in_ctor<Function>>;

/*!
 * Calls function during static variable initialization,
 * i.e. before main is called.
 *
 * Function is called through instantiating this class:
 * `template struct call_on_init<function>`
 */
template<auto Function>
class call_on_init {
	using dummy = force_call_on_init<Function>;
};
} // namespace aw
#endif//aw_on_static_helpers_h
