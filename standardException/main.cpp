#include <iostream>
#include <stdexcept>
#include "Array.h"
using namespace std;

inline void array_test(int size) {
	Array a(size);
	for (int i = 0; i < size; i++)
		a[i] = i;

	cout << size << ':';
	for (int i = 0; i < size; i++)
		cout << ' ' << a[i];
	cout << '\n';
}

int main() {
	try {
		array_test(5);
	} catch(exception& e) {
		cerr << e.what() << endl;
	}

	try {
		array_test(0);
	} catch(exception& e) {
		cerr << e.what() << endl;
	}

	try {
		Array a(5);
		a[5] = 5;
	} catch(exception& e) {
		cerr << e.what() << endl;
	}

	return 0;
}
