#include <iostream>
#include <cstring>
using namespace std;

namespace N { int k(3); }
int main() {
	int k(5);
	cout << ::k << endl; // (. . .)
	cout << N::k << endl; // (. . .)
	cout << k << endl; // (. . .)
	return 0;
}