#include <iostream>
#include <cstring>
using namespace std;

struct S {
	int a, b, c;
	S(int a = 0, int b = 1, int c = 2) : a(a), b(0) {
		b = b; this->c = c;
	}
	void print() { cout << a + b + c << endl; }
};
int main() {
	S s = 10;
	s.print();
	return 0;
}