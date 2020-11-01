#include <iostream>

using namespace std;

class Example {
	int a;
public:
	explicit Example(int i);
	Example& add(int n);
	int i() const;
};

Example::Example(int i) : a{i} { }

Example& Example::add(int n)
{
	a += n;
	return *this;
}

int Example::i() const
{
	return a;
}

int main()
{
	Example e{1};
	cout << e.i() << '\n';
	cout << e.add(1).i() << '\n';
	return 0;
}
