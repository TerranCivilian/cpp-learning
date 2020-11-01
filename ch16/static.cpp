#include <iostream>

using namespace std;

class Example {
	int a;
	static int max;
	class ExampleInit { };
public:
	explicit Example(int i);
	Example& add(int n);
	int i() const;
	static void set_max(int n);
};

int Example::max{1024};

Example::Example(int i)
{
	if (i <= max)
		a = i;
	else
		throw ExampleInit{};
}

Example& Example::add(int n)
{
	int tmp {a+n};
	if (tmp <= max)
		a = tmp;
	else
		a = max;

	return *this;
}

int Example::i() const
{
	return a;
}

void Example::set_max(int n)
{
	max = n;
}

int main()
{
	Example e{1};
	cout << e.i() << '\n';
	cout << e.add(1).i() << '\n';

	//Example test{1025}; // exception thrown
	
	Example::set_max(3);

	e.add(1).add(1).add(1).add(1).add(1).add(1); // won't add past max
	cout << e.i() << '\n';

	Example::set_max(4);
	Example e2{0};
	cout << e2.i() << '\n';
	e2.add(1000); // static 'max' applies to all Example instances
	cout << e2.i() << '\n';

	return 0;
}
