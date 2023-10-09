#include <iostream>
#include <cstring>
using namespace std;

class A {
	int m;
};
struct B {
	int m;
};
int main() {
	A a;
	B b;
	a.m = 1; // (. . .)
	b.m = 1; // (. . .)
};