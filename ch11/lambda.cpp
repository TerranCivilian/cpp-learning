#include <iostream>

using namespace std;

void basic()
{
	auto lam { []() { return 1; } };
	cout << "basic lambda function returns " << lam() << '\n';
}

void params()
{
	auto lam { [](int x) { return x+1; } };
	cout << "incrementing a parameter: lam(1) = " << lam(1) << '\n';
}

void capture()
{
	struct X {
		int i;
	};

	X test{5};

	auto lam { [&test](int x) { return test.i>=0 && test.i<=x; } };
	cout << "struct field(5) less than 3? " << lam(3) << '\n';
	cout << "struct field(5) less than 8? " << lam(8) << '\n';
}

void mutable_capture()
{
	int i {1};
	auto lam { [&i](int x) mutable { i += x; } };
	lam(4);
	cout << "local variable i=1 incremented with lam(4): " << i << '\n';
}

int main()
{
	basic();

	params();

	capture();

	mutable_capture();
	return 0;
}
