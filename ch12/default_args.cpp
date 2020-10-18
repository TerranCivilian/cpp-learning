#include <iostream>
#include <vector>

using namespace std;

void print_vec(vector<int> v, char sep=' ')
{
	for (int i : v)
		cout << i << sep;
	cout << endl;
}

int main()
{
	vector<int> v {1,2,3,4,5,6};
	print_vec(v);
	print_vec(v, '\n');
	return 0;
}
