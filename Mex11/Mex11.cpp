#include <iostream>
#include <cstring>
using namespace std;

struct S {
	void f() { }
	void fc() const { }
	void g() {
		f(); // (. . .)
		fc(); // (. . .)
	}
	void gc() const {
		f(); // (. . .)
		fc(); // (. . .)
	}
};int main() {	S f();	S fc();	S g();	S gc();	return 0;}