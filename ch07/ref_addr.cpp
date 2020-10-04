#include <cstdio>
#include <iostream>

void print_addr(const int& i)
{
	printf("%p\n", &i);
}

const int& return_local_var()
{
	const int& ir = 20;
	return ir;
}

int main()
{
	int i = 1;
	int &ir = i;
	printf("int i = 1;\nint &ir = i;\n");
	printf("&i =  %p\n&ir = %p\n", &i, &ir);

	printf("\n");

	printf("print_addr(i):\n");
	print_addr(i);

	printf("\n");

	printf("print_addr(ir):\n");
	print_addr(ir);

	printf("\n");

	printf("print_addr(10):\n");
	print_addr(10);

	printf("\n");

	printf("cout << return_local_var()\n");
	std::cout << return_local_var() << '\n';
	return 0;
}
