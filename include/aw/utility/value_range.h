/*
 * Copyright (C) 2015  absurdworlds
 * Copyright (C) 2015  Hedede <hededrk@gmail.com>
 *
 * License LGPLv3-only:
 * GNU Lesser GPL version 3 <http://gnu.org/licenses/lgpl-3.0.html>
 * This is free software: you are free to change and redistribute it.
 * There is NO WARRANTY, to the extent permitted by law.
 */
#ifndef _aw_value_range_
#define _aw_value_range_
#include <cassert>
#include <iterator>
#include <type_traits>
namespace aw {
template <typename T>
struct Range {
	Range(T begin, T end)
		: first(begin), last(end)
	{
	}

	class iterator :
	      public std::iterator<std::random_access_iterator_tag, T> {
	public:
	typedef T value_type;
	typedef T& reference;
	iterator(value_type v)
		: value(v)
	{
	}

	reference operator * ()
	{
		return value;
	}

	iterator& operator ++ ()
	{
		++value;
		return *this;
	}

	iterator& operator -- ()
	{
		--value;
		return *this;
	}

	bool operator == (iterator const& other)
	{
		return value == other.value;
	}

	bool operator != (iterator const& other)
	{
		return value != other.value;
	}

	private:
		value_type value;
	};

	iterator begin()
	{
		return iterator(first);
	}

	iterator end()
	{
		return iterator(last);
	}
private:
	T first;
	T last;
};

template<typename T>
Range<T> range(T a, T z)
{
	assert(a < z);
	return Range<T>(a, z);
}

template<typename T>
Range<T> range(T end)
{
	return Range<T>(T(), end);
}

Range<unsigned char> char_range(unsigned char a, unsigned char z)
{
	assert(a < z);
	return Range<unsigned char>(a, z + 1);
}

} // namespace aw
#endif//_aw_value_range_
