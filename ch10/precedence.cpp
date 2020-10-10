#include <iostream>

using namespace std;

int main()
{
	int i {0};
	cout << ++i << '\n';

	int* p {&i};
	cout << ++*p << '\n';
	cout << *p++ << '\n'; // this dereferences p and then increments the pointer!
	// cout << *p << '\n'; // oops, p is pointing to junk now
	
	int a[] {1,2,3,4,5,6,7,8,9};
	p = a;
	for (int i {1}; i<10; ++i) {
		cout << *p++ << ' '; // same as above but as desired behavior
	}
	cout << '\n';

	// && has higher precedence than ||
	bool t1{true}, t2{true}, f1{false}, f2{false};
	if (t1 || f1 && f2)
		cout << "`t1 || f1 && f2` evaluates as t1 || (f1 && f2)\n";
	if (t1 || f1 && t2 || f2)
		cout << "`t1 || f1 && t2 || f2` valuates as t1 || (f1 && t2) || f2\n";

	return 0;
}
