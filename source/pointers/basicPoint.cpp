#include <iostream>
#include "../../headers/pointers.h"


void bloo()
{
}
void basicPoint()
{
	using std::cout;
	using std::endl;
	int *p1, *p2;

	cout << &p1 << endl;
	cout << &p2 << endl;
	p1 = new int;
	*p1 = 42;
	p2 = p1; 
	
	cout << "*p1 == " << *p1 << endl;
	cout << "*p2 == " << *p2 << endl;
	cout << "P1 is at " << p1 << endl;
	cout << "P2 is at " << p2 << endl;
	cout << "P1 where the pointer is kept is at " << &p1 << endl;
	cout << "P2 where the pointer is kept  is at " << &p2 << endl;


	*p2 = 53;
	cout << "*p1 == " << *p1 << endl;
	cout << "*p2 == " << *p2 << endl;

	p1 = new int;
	*p1 = 88;
	cout << "*p1 == " << *p1 << endl;
	cout << "*p2 == " << *p2 << endl;

	cout << "Hope you got the point of this exampl!\n";
	

}