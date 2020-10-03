#include <iostream>

using namespace std;

int main()
{
	int a {};
	int b{};
	int c = int{3};
	int d { int{4} };
	int* e { new int{5} };
	int* f { new int[4]{6, 7, 8, 9} };
	cout << a << '\n';
	cout << b << '\n';
	cout << c << '\n';
	cout << d << '\n';
	cout << *e << '\n';
	cout << *f << '\n';
	return 0;
}
