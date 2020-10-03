#include <iostream>

using namespace std;

int main()
{
	cout << "sizeof(char) = " << sizeof(char) << " byte\n";
	cout << "sizeof(wchar_t) = " << sizeof(wchar_t) << " bytes\n";
	cout << "sizeof(char16_t) = " << sizeof(char16_t) << " bytes\n";
	cout << "sizeof(char32_t) = " << sizeof(char32_t) << " bytes\n";

	cout << "sizeof(\"test\") = " << sizeof("test") << '\n';
	cout << "sizeof(L\"test\") = " << sizeof(L"test") << '\n';

	cout << "sizeof(\"你好，世界\") = " << sizeof("你好，世界") << '\n';
	cout << "sizeof(L\"你好，世界\") = " << sizeof(L"你好，世界") << '\n';
	return 0;
}
