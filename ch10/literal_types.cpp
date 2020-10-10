#include <iostream>

using namespace std;

struct Int {
	int i;
	constexpr Int(int n) : i{n} { }
	constexpr int add(int n) { return i+n; }
	constexpr int val() { return i; }
};

int main()
{
	constexpr Int i {1};
	// store function call results in constexpr values to guarantee computation at compile time
	// compiler output confirms that the functions are not compiled:
	// objdump -d literal_types
	constexpr int v {i.val()};
	constexpr int a {i.add(3)};
	cout << v << '\n';
	cout << a << '\n';
	return 0;
}
