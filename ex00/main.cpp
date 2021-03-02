#include <iostream>
#include <array>
#include "easyfind.hpp"

int	main()
{
	std::array<int, 3> a = {0, 1, 2};
	int	found = 0;

	try
	{
		found = easyfind(a, 3);
		std::cout << "Found: " << found << std::endl;
	}
	catch (NotFoundException const& e){ std::cout << e.what() << std::endl; }

	try
	{
		found = easyfind(a, 2);
		std::cout << "Found: " << found << std::endl;
	}
	catch (NotFoundException const& e){ std::cout << e.what() << std::endl; }

	return 0;
}
