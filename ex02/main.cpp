#include "MutantStack.hpp"

int	main()
{
	using std::cout;
	using std::endl;

	MutantStack<int>	stack;

	stack.push(42);

	cout << stack.top() << endl;

	stack.push(101);

	cout << stack.top() << endl;

	stack.pop();

	cout << stack.top() << endl;

	stack.push(101);

	cout << "stack[0]: " << stack[0] << ", stack[1]: " << stack[1] << endl;

	cout << "stack.size(): " << stack.size() << endl;
	return 0;
}
