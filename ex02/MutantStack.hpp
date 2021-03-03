#pragma once

#include <iostream>
#include <deque>

template<typename T>
class MutantStack	:	public std::deque<T>
{
public:
	MutantStack() {};

	~MutantStack() {};

	inline T const&	top() const { return std::deque<T>::back(); }

	inline void	push(const T& value) { std::deque<T>::push_back(value); }
	inline void	pop() { std::deque<T>::pop_back(); };
};

template<typename T>
std::ostream&	operator<<(std::ostream& os, MutantStack<T> const& src)
{
	os << "MutantStack (" << src.size() << ')';
	return os;
}
