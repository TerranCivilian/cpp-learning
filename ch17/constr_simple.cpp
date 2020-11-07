#include <iostream>

using namespace std;

class Test {
	int ii;
public:
	Test(const int i=0) // adding the default argument makes this the default constructor if no args are passed
	{
		if (i >= 0 && i <= 1024)
			ii = i;
	}
	int i() { return ii; }
};

int main()
{
	Test t; // default constructor called
	cout << t.i() << '\n';

	Test t2{45};
	cout << t2.i() << '\n';

	return 0;
}
