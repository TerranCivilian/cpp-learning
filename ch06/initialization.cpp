#include <iostream>

using namespace std;

int main()
{
	int a {1};
	int b{2};
	int c = int{3};
	int d { int{4} };
	int* e { new int{5} };
	int* f { new int[1]{6} };

	cout << a << '\n';
	cout << b << '\n';
	cout << c << '\n';
	cout << d << '\n';
	cout << *e << '\n';
	cout << *f << '\n';
	cout << int{'N'} << '\n';
	cout << int{9} << '\n';
	return 0;
}
