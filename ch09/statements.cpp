#include <iostream>
#include <vector>

using namespace std;

enum Light { green, yellow, red };

int main()
{
	// range-for statement
	vector<int> v {1,2,3,4};
	for (int i : v) {
		cout << i << ' ';
	}
	cout << '\n';

	// switch on a constant expression
	// don't use a default case when switching on an enum
	// the compiler will warn you if you don't have a case for each value
	Light main {green};
	switch (main) {
	case green:
		cout << "GO" << '\n';
		break;
	case yellow:
		cout << "SLOW DOWN" << '\n';
		break;
	case red:
		cout << "STOP" << '\n';
		break;
	}

	return 0;
}
