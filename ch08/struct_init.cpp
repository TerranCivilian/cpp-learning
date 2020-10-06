#include <iostream>

int main()
{
	struct A {
		int i;
		char c;
	};
	struct B {
		int i;
		A* a;
	};
	struct C {
		char c;
	};
	struct D {
		C c[8];
	};
	struct E {
		A* a[4];
		D d[2];
	};

	A a{1, 'a'};
	B b{2, &a};
	C c{'c'};
	D d{ {'0','1','2','3','4','5','6','7'} };

	A x{};
	A y{2,'y'};
	A z{3,'z'};
	E e{ {&a, &x, &y, &z },
	     {{1,2,3,4,5,6,7,8},
              {'a','b','c','d','e','f','g','h'}}};

	return 0;
}
