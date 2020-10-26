#include <iostream>

using namespace std;

namespace Test1 {
	int f(int k) { return k+1; };
	char f(char c) { return c+1; };
	int i{3};
}

namespace Test2 {
	namespace Test3 {
		int f(int k) { return k+2; };
		char c{'2'};
	}
	char c{'1'};
}

int i{1};

int main()
{
	cout << Test1::f(1) << '\n';
	cout << Test1::f('a') << '\n';
	using Test2::Test3::f;
	cout << f(1) << '\n';

	using namespace Test2;
	cout << c << ' ' << Test3::c << '\n';

	int i{2};
	cout << ::i << ' ' << i << ' ' << Test1::i << '\n';

	return 0;
}
