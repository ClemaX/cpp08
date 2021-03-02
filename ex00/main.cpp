#include <iostream>
#include <array>
#include "easyfind.hpp"

int	main()
{
	std::array<int, 3> a = {0, 1, 2};
	int	found = easyfind(a, 3);

	if (found != -1)
		std::cout << "Found: " << found << std::endl;
	else
		std::cout << "Not found!" << std::endl;
	return 0;
}
