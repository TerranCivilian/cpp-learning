#include <iostream>
#include <cstring>

using namespace std;

class TrivialEx {
	int ii;
public:
	TrivialEx(const int n) : ii{n} { };
	// TrivialEx(const TrivialEx&);            // default copy constructor (added by compiler)
	// TrivialEx& operator=(const TrivialEx&); // default copy assignment (added by compiler)
	int i() { return ii; }
	void print() const;
};

void TrivialEx::print() const {
	cout << ii << endl;
}

class LessTrivialEx {
	char* s;
public:
	LessTrivialEx(const char* str);
	LessTrivialEx(const LessTrivialEx&);
	LessTrivialEx& operator=(const LessTrivialEx&);
	~LessTrivialEx();
	void print() const;
};

LessTrivialEx::LessTrivialEx(const char* str) {
	s = new char[strlen(str)+1];
	strcpy(s, str);
}

LessTrivialEx::LessTrivialEx(const LessTrivialEx& t) {
	s = new char[strlen(t.s)+1];
	strcpy(s, t.s);
}

LessTrivialEx& LessTrivialEx::operator=(const LessTrivialEx& t) {
	s = new char[strlen(t.s)+1];
	strcpy(s, t.s);
	return *this;
}

LessTrivialEx::~LessTrivialEx() {
	delete[] s;
}

void LessTrivialEx::print() const {
	cout << s << endl;
}

int main()
{
	TrivialEx t1{13};
	TrivialEx t2{14};
	TrivialEx t3{t1}; // default copy constructor
	t3.print();
	t3 = t2; // default copy assignment
	t3.print();

	LessTrivialEx t4{"testing"};
	LessTrivialEx t5{"another"};
	LessTrivialEx t6{t4}; // class defined copy constructor
	t6.print();
	t6 = t5; // class defined copy assignment
	t6.print();
	return 0;
}
