#include <iostream>

using namespace std;

// passing a reference to a 10-element array;
// this syntax is necessary to prevent the array
// from converting to int* (pointer to int).
// this is inflexible; it can only accept arrays
// of 10 integers
void print_arr(int (&a)[10])
{
	for (int i=0; i<10; ++i)
		cout << a[i] << ' ';
	cout << endl;
}

void print_pointer(int* p, int len)
{
	for (int i=0; i<len; ++i)
		cout << *p++ << ' ';
	cout << endl;
}

int main()
{
	int a[] {0,1,2,3,4,5,6,7,8,9};
	print_arr(a);

	int b[] {0,1,2,3};
	print_pointer(b, 4);
	//print_arr(b); // error (print_arr argument must be type int[10])
	return 0;
}
