#include <iostream>
#include <initializer_list>

using namespace std;

class Test {
	int* i;
	long unsigned s;
public:
	Test(initializer_list<int> li);
	~Test() { delete[] i; }

	int at(int n) { return i[n]; }
	int size() { return s; }
};

Test::Test(initializer_list<int> li) : s{li.size()}
{
	i = new int[li.size()];
	for (long unsigned k=0; k<li.size(); ++k)
		i[k] = li.begin()[k];
}

void print_Test(Test& t)
{
	cout << "size: " << t.size() << '\n';
	for (int i=0; i<t.size(); ++i)
		cout << t.at(i) << ' ';
	cout << '\n';
}

int main()
{
	Test t{1,2,3};
	print_Test(t);

	Test t2{1};
	print_Test(t2);

	Test t3{};
	print_Test(t3);

	return 0;
}
