//function to demonstrate a reverse iterator
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void reverseIterator()
{
	vector<char> container;

	container.push_back('A');
	container.push_back('B');
	container.push_back('C');

	cout << "Forward:\n";
	vector<char>::iterator p;
	for( p = container.begin(); p != container.end(); p++)
		cout << * p << " ";
	cout << endl;

	cout << "And now backwards\n";
	vector<char>::reverse_iterator q;
	for ( q = container.rbegin(); q != container.rend(); q++)
		cout << *q << " ";
	cout << endl;

}