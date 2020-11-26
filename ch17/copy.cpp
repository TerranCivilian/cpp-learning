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
	LessTrivialEx& operator=(LessTrivialEx&);
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

LessTrivialEx& LessTrivialEx::operator=(LessTrivialEx& t) {
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
	TrivialEx t2{t1}; // copy constructor invoked
	t2.print();

	LessTrivialEx t3{"testing123"};
	t3.print();
	LessTrivialEx t4{"another"};
	t4.print();
	LessTrivialEx t5{t4};
	t5.print();
	LessTrivialEx t6 = t5;
	t6.print();
	return 0;
}
