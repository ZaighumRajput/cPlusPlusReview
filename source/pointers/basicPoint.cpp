#include <iostream>
#include "../../headers/pointers.h"
using std::cout;
using std::endl;


void basicPoint()
{
	int *p1, *p2;

	p1 = new int;
	*p1 = 42;
	p2 = p1; 
	
	cout << "*p1 == " << *p1 << endl;

}