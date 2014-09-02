//Demonstration of bidirectional and random-access iterators
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;


void accessIterators()
{
	vector<char> container;

	container.push_back('T');
	container.push_back('A');
	container.push_back('S');
	container.push_back('K');

	for (int i = 0; i < 4; i++)
		cout << "container[" << i << "] =="
			 << container[i];

}
