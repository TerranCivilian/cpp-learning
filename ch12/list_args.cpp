#include <iostream>

using namespace std;

struct A {
	int i;
	char c;
};

void print_struct_arg(A str) // initialized with a temporary object in function call from main
{
	cout << str.i << ' ' << str.c << '\n';
}

void print_int_arg(int i)
{
	cout << i << '\n';
}

int main()
{
	// can use lists as function arguments to initialize
	// the function's parameters
	print_struct_arg({2, 'b'});
	print_int_arg({1}); // redundant
	
	return 0;
}
