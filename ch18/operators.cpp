#include <iostream>

class Backwards {
	int i;
public:
	Backwards(const int i) : i{i} { }

	Backwards operator+(int n) { return Backwards{i-n}; }
	Backwards operator-(int n) { return Backwards{i+n}; }
	Backwards operator*(int n) { return Backwards{i/n}; }
	Backwards operator/(int n) { return Backwards{i*n}; }

	void print();
};

void Backwards::print()
{
	std::cout << i << std::endl;
}

int main()
{
	Backwards b{2};

	b = b + 2;
	b.print();

	b = b - 10;
	b.print();

	b = b * 2;
	b.print();

	b = b / 10;
	b.print();

	return 0;
}
