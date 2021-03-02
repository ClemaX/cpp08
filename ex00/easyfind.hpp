#pragma once

template<typename T>
int	easyfind(T& container, int toFind)
{
	typename T::const_iterator const	end = container.end();
	typename T::const_iterator		it = container.begin();

	while (it != end && *it != toFind)
		it++;

	return (it == end ? -1 : *it);
}
