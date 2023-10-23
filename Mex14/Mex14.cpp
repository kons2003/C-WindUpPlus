#include <iostream>
#include <cstring>
using namespace std;

struct S {
	S* copy(const S* p) {
		if (p == this) { return this; }

		this->m = p->m;
		return this;
	}
	int m;
};