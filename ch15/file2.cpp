#include <iostream>
#include "dep.h"

extern int i; // defined elsewhere

void print_i()
{
	std::cout << i << std::endl;
}

void print_A(A& a)
{
	std::cout << a.i << ' ' << a.c << ' ' << a.d << std::endl;
}
