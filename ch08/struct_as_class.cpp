#include <iostream>

using namespace std;

struct Test {
	int i;
	void print_i() { cout << i << '\n'; }
	Test(int n) : i{n} { }
};

int main()
{
	Test t{2};
	t.print_i();
	return 0;
}
