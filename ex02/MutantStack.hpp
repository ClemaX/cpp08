#pragma once

#include <iostream>
#include <deque>

template<typename T>
class MutantStack
{
protected:
	std::deque<T>	data;

public:
	MutantStack()	:	data() {};

	~MutantStack() {};

	inline MutantStack&	operator=(MutantStack const& rhs) { data = rhs.data; }

	inline T const&	top() const { return data.back(); }

	inline bool	empty() const { return data.empty(); }
	inline bool	size() const { return data.size(); }

	inline void	push(const T& value) { data.push_back(value); }
	inline void	pop() { data.pop_back(); };

	inline void	swap(MutantStack& other) throw() { data.swap(other.data); }

	inline T&	operator[](size_t index) { return data[index]; };
};

template<typename T>
std::ostream&	operator<<(std::ostream& os, MutantStack<T> const& src)
{
	os << "MutantStack (" << src.size() << ')';
	return os;
}
