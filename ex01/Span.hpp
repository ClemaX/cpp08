#pragma once

#include <set>

#include <algorithm>

class Span
{
private:
	unsigned		dataSize;
	std::set<int>	data;
	Span();

public:
	Span(unsigned n);
	~Span();

	class NoSpanException	:	public std::exception
	{ public: char const*	what() const throw(); };

	class OverflowException	:	public std::exception
	{ public: char const*	what() const throw(); };

	unsigned	shortestSpan() const throw(NoSpanException);
	unsigned	longestSpan() const throw(NoSpanException);

	void	addNumber(int i) throw(OverflowException);

	inline unsigned	size() const { return dataSize; }

	Span&	operator=(Span const& src);
};
