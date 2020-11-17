#include <iostream>

using namespace std;

class TrivialEx {
	int ii;
public:
	TrivialEx(const int n) : ii{n} { };
	// TrivialEx(const TrivialEx&);            // default copy constructor (added by compiler)
	// TrivialEx& operator=(const TrivialEx&); // default copy assignment (added by compiler)
	int i() { return ii; }
}

class LessTrivialEx {
	char* s;
public:
	LessTrivialEx(const char* str);
	LessTrivialEx(const LessTrivialEx&) const;
	LessTrivialEx& operator=(const LessTrivailEx&) const;
	void print() const;
}

LessTrivialEx::LessTrivialEx(const char* str) {

}

LessTrivialEx::LessTrivialEx(const LessTrivialEx&) {

}

LessTrivialEx::LessTrivialEx& operator=(const LessTrivialEx&) const {

}

LessTrivialEx::print() const {
	cout << s << endl;
}

int main()
{
	TrivialEx t1{13};
	TrivialEx t2{t1}; // copy constructor invoked
	return 0;
}
