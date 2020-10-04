#include <iostream>

using namespace std;

void print_i(const int& i)
{
	cout << i << '\n';
}

int& inc(int& i)
{
	return ++i;
}

const int inc(const int& i)
{
	return i+1;
}

int main()
{
	int i = 1;
	int& ir = i;

	cout << "int i = 1\nint& ir = i\n";
	cout << "print_i(i):\n";
	print_i(i);
	cout << "print_i(ir):\n";
	print_i(ir);
	cout << "print_i(10):\n";
	print_i(10);
	cout << '\n';

	cout << "int& a = inc(i)\n";
	int& a = inc(i);
	cout << "a: " << a << '\n';
	cout << "i: " << i << '\n';
	cout << "int b = inc(2)\n";
	int b = inc(2);
	cout << "b: " << b << '\n';
	cout << "int c = inc(b)\n";
	int c = inc(b);
	cout << "c: " << c << '\n';

	return 0;
}
