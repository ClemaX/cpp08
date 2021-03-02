#pragma once

#include <algorithm>

class	NotFoundException	:	public std::exception
{
public:
	char const*	what() const throw() { return "Value could not be found!"; };
};

template<typename T>
int	easyfind(T& container, int toFind)
{
	int*	p;

	p = std::find(container.begin(), container.end(), toFind);

	if (p != container.end())
		return *p;
	else
		throw NotFoundException();
}
