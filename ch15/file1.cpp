#include "dep.h"

void print_i();

int i{9};

int main()
{
	print_i();

	A a{0, '1', 2.00};
	print_A(a);

	return 0;
}
