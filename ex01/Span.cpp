#include "Span.hpp"

char const* Span::NoSpanException::what() const throw()
{
	return "A span needs at least two numbers!";
}

char const* Span::OverflowException::what() const throw()
{
	return "The span is full!";
}

Span::Span()
	:	data()
{
}

Span::Span(unsigned n)
	:	dataSize(n),
		data()
{
}

#include <iostream>

unsigned Span::shortestSpan() const throw(Span::NoSpanException)
{
	unsigned span = -1U;

	if (data.size() >= 2)
	{
		std::set<int>::const_iterator const	end = data.end();
		std::set<int>::const_iterator		it = data.begin();

		int	oldValue = *it++;
		int	value;

		while (it != end)
		{
			value = *it++;
			if (static_cast<unsigned>(value - oldValue) < span)
			{
				span = value - oldValue;
				oldValue = value;
			}
		}
	}
	else
		throw NoSpanException();

	return span;
}

unsigned Span::longestSpan() const throw(Span::NoSpanException)
{
	unsigned span = 0;

	if (data.size() >= 2)
	{
		std::set<int>::const_reverse_iterator const	last = data.rbegin();
		std::set<int>::const_iterator const			first = data.begin();

		span = *last - *first;
	}
	else
		throw NoSpanException();

	return span;
}

void	Span::addNumber(int i) throw(Span::OverflowException)
{
	if (data.size() < dataSize)
		data.insert(i);
	else
		throw OverflowException();
}

Span::~Span()
{
}
