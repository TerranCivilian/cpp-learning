#include <iostream>
#include <exception>
#include <string>

using namespace std;

struct Ex : exception {
	virtual const char* what() const throw()
	{
		return "error: user input was negative\n";
	}
};

int main()
{
	try
	{
		int i;
		while (cin >> i)
			if (i < 0)
				throw Ex{};
	}
	catch(Ex& e)
	{
		cout << e.what();
	}
	return 0;
}
