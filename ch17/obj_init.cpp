#include <iostream>

using namespace std;

struct Test {
	int ii;
};

int main()
{
	Test t{}; // default initialization
	cout << t.ii << '\n';

	Test t2{2}; // memberwise initialization
	cout << t2.ii << '\n';

	Test t3{t2}; // copy initialization
	cout << t3.ii << '\n';
	return 0;
}
