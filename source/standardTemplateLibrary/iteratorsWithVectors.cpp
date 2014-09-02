#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;


void interatorsWithVectors()
{
	vector<int> container;
	
	for (int i = 1; i <= 4; i++)
		container.push_back(i);
		
	cout << "Here is what is in the container:\n";
	vector<int>::iterator p;
	for (p = container.begin(); p != container.end(); p++)
		cout << *p << " ";
	cout << endl;
	
	cout << "Setting entries to 0:\n";
	for (p = container.begin(); p != container.end(); p++)
		*p = 0;
		
	cout << "Container now contains:\n";
	for (p = container.begin(); p != container.end(); p++)
		cout << *p << " " ;	
		
	//if v is a vector, what does v.begin() return? What does v.end() return?
 	//cout << container.begin();
 	//cout << container.end();
 	
 	vector<double> dbblContainer;
 	for (double i = 1; i <= 4; i++)
 		dbblContainer.push_back(i);
 		
 	vector<double>::iterator q;
 	cout << "\n";
 	for (q = dbblContainer.begin() + 1; q != dbblContainer.end(); q++)
 		cout << *q << " "; 
 	
}