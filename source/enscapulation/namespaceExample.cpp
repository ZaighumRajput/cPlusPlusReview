#include <iostream>
#include "../../headers/nameSpaces.h"
using namespace std;

void blah()
{

}
namespace Hello
{
	void message();
}

namespace GoodBye
{
	void message();
}

void message();

int mainFunction()
{
	using GoodBye::message;
	{
		using Hello::message;
		message();
		GoodBye::message();

	}
	message();
	return EXIT_SUCCESS;


}


void message()
{
	cout << "Global Message.\n" ;

}

namespace Hello
{
	void message()
	{
		cout << "Hello .\n";
	}
}

namespace GoodBye
{
	void message()
	{
		cout << "Goodbye .\n";
	}

}
