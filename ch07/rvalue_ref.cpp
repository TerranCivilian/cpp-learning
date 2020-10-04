#include <iostream>

using namespace std;

int return_2()
{
	return 2;
}

void rvalue_test(const int&& i)
{
}

void rvalue_test(const int& i)
{
}

int main()
{
	int&& a = 1; // assign int literal to rvalue ref
	int&& b = return_2(); // or a function return value
	cout << a << '\n';
	cout << b << '\n';

	rvalue_test(3);
	int&& c = 4;
	rvalue_test(c); // int& function overload
	return 0;
}
