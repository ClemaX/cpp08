#include <iostream>
#include "Span.hpp"

int	main()
{
	using	std::cout;
	using	std::endl;

	Span	sp(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	cout << "shortestSpan: " << sp.shortestSpan() << endl;
	cout << "longestSpan:  " << sp.longestSpan() << endl;

	cout << endl << "Attempt to overflow span..." << endl;

	try { sp.addNumber(0); }
	catch (Span::OverflowException const& e)
	{ cout << "Caught OverflowException: " << e.what() << endl; }


	cout << endl << "Attempt to get invalid span..." << endl;

	Span	inval(5);

	inval.addNumber(0);

	try { inval.shortestSpan(); }
	catch (Span::NoSpanException const& e)
	{ cout << "Caught NoSpanException: " << e.what() << endl; }

	try { inval.longestSpan(); }
	catch (Span::NoSpanException const& e)
	{ cout << "Caught NoSpanException: " << e.what() << endl; }


	return 0;
}
