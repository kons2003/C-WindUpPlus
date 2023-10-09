#include <iostream>
#include <cstring>
using namespace std;

struct S {
	int m;
	S(int m = 1) : m(m) { }
	S(const S& s) : m(s.m) { cout << m << endl; }
};
void f(S& r) { }
int main() {
	S s1(3), s2, s3 = s1; // (. . .)
	f(s2); // (. . .)
	return 0;
}