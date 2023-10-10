#include <iostream>
#include <cstring>
using namespace std;

inline int& get_element(int a[], int k) {
	return a[k];
}

int main() {
	int a[10];
	get_element(a, 1) = 3; // a[1] = 3

	cout << a[1] << endl;

	return 0;
}