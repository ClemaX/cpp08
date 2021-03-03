#include "MutantStack.hpp"

#include <stack>

int	main()
{
	using std::cout;
	using std::endl;

	MutantStack<int>	stack;

	cout << "* push 42 *" << endl;
	stack.push(42);

	cout << "stack.top(): " << stack.top() << endl;

	cout << endl << "* push 101 *" << endl;
	stack.push(101);

	cout << "stack.top(): " <<  stack.top() << endl;

	cout << endl << "* pop *" << endl;
	stack.pop();

	cout << "stack.top(): " <<  stack.top() << endl;

	cout << endl << "* push 101 *" << endl;
	stack.push(101);

	cout << "stack[0]: " << stack[0] << ", stack[1]: " << stack[1] << endl;

	cout << "stack.size(): " << stack.size() << endl;

	cout << endl << "* realStack(stack) *" << endl;

	std::stack<int> realStack(stack);

	cout << "realStack.top(): " << realStack.top() << endl;

	return 0;
}
