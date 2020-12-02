#include <iostream>

struct X {
	int i;
	X operator-() { return X{i-2}; }
};

// overloaded operators don't need to be member functions
X operator+(X x) { return X{x.i+10}; }

void print(X x) { std::cout << x.i << std::endl; }

int main()
{
	X x{0};

	x = +x;
	print(x);

	x = +x;
	print(x);

	x = +x;
	print(x);

	x = -x;
	print(x);

	return 0;
}
