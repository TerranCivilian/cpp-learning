#include <iostream>

using namespace std;

void print_rval_ref(int&& r)
{
	cout << r << '\n';
}

void print_lval_ref(int& r)
{
	cout << r << '\n';
}

int main()
{
	print_rval_ref(1);

	int i = 2;
	print_lval_ref(i);

	return 0;
}

/*
 *
 * main:
 *       push    rbp
 *       mov     rbp, rsp
 *       sub     rsp, 16
 *       mov     DWORD PTR [rbp-4], 1
 *       lea     rax, [rbp-4]
 *       mov     rdi, rax
 *       call    print_rval_ref(int&&)
 *       mov     DWORD PTR [rbp-8], 2
 *       lea     rax, [rbp-8]
 *       mov     rdi, rax
 *       call    print_lval_ref(int&)
 *       mov     eax, 0
 *
 */
