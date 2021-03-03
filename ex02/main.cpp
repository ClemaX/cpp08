#include "MutantStack.hpp"

#include <stack>

int	main()
{
	using std::cout;
	using std::endl;

	MutantStack<int>	mStack;

	cout << "* push 42 *" << endl;
	mStack.push(42);

	cout << "mStack.top(): " << mStack.top() << endl;

	cout << endl << "* push 101 *" << endl;
	mStack.push(101);

	cout << "mStack.top(): " <<  mStack.top() << endl;

	cout << endl << "* pop *" << endl;
	mStack.pop();

	cout << "mStack.top(): " <<  mStack.top() << endl;

	cout << endl << "* push 101 *" << endl;
	mStack.push(101);

	cout << "mStack[0]: " << mStack[0] << ", mStack[1]: " << mStack[1] << endl;

	cout << "mStack.size(): " << mStack.size() << endl;

	cout << endl << "* using iterators *" << endl;

	MutantStack<int>::iterator it = mStack.begin();
	MutantStack<int>::iterator ite = mStack.end();

	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	cout << endl << "* realStack(stack) *" << endl;

	std::stack<int> realStack(mStack);

	cout << "realStack.top(): " << realStack.top() << endl;

	return 0;
}
