#include <iostream>
#include <cstring>

using namespace std;

class Example {
	char* s;
	size_t len;
public:
	Example(const char*);
	Example(Example&&);
	Example& operator=(Example&&);
	~Example() { delete[] s; }

	void print();
};

Example::Example(const char* str)
{
	len = strlen(str);
	s = new char[len+1];
	strcpy(s, str);
}

Example::Example(Example&& e)
{
	len = e.len;
	s = e.s;
	e.len = 0;
	e.s = nullptr;
}

Example& Example::operator=(Example&& e)
{
	len = e.len;
	s = e.s;
	e.len = 0;
	e.s = nullptr;
	return *this;
}

void Example::print()
{
	cout << s << endl;
}

int main()
{
	Example first{ Example{"first"} };
	first.print();

	Example second{"junk"};
	second = Example{"move this"};
	second.print();

	return 0;
}
