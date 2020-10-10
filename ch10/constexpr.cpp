#include <iostream>

using namespace std;

constexpr double pi {3.14159265359};
constexpr double circle_area(double r)
{
	return pi*r*r;
}

int main()
{
	constexpr double area2 {circle_area(2.0)};
	constexpr double area4 {circle_area(4.0)};
	cout << area2 << '\n';
	cout << area4 << '\n';


	// can still use circle_area like a normal function;
	// compiler will still pre-compute the values above
	double n;
	cin >> n;
	cout << circle_area(n) << '\n';
	return 0;
}
