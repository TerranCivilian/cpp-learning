#include <iostream>

using namespace std;

int main()
{
	struct A {
		int i;
		A* a; // using named type before it's fully defined
		char c;
	};
	A a {};
	A b {1, &a, 'c'};
	cout << b.i << ' ' << b.a << ' ' << b.c << '\n';


	struct D; // declared but not defined
	// D d;   // error; not fully defined
	struct E {
		D* d;
	};

	struct D {
		A a;
	};

	return 0;
}
