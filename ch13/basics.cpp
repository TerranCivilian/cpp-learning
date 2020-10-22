#include <iostream>
#include <exception>
#include <string>

using namespace std;

// simplest example
void test1()
try
{
	int i;
	cin >> i;
	if (i < 0)
		throw(i);
}
catch(int i)
{
	cout << "error: user input is negative.\n";
}

// using multiple catch clauses
void test2()
try
{
	int i;
	cin >> i;
	if (i == 1)
		throw(i);
	if (i == 2)
		throw("error");
	if (i == 3)
		throw(false);
}
catch(int i)
{
	cout << "integer exception object: " << i << "\n";
}
catch(const char* s)
{
	cout << "string exception object: " << s << "\n";
}
catch(...)
{
	cout << "something else caught\n";
}

// caught but unhandled exceptions terminate the program
void test3()
{
	try {
		throw(0);
	}
	catch(const exception& e) {
		cout << "caught exception\n";
	}
	cout << "this line will not execute\n";
}

int main()
{
	test1();
	test2();
	test3();
	return 0;
}
