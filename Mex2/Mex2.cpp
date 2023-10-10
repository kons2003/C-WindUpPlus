#include <iostream>
#include <cstring>
using namespace std;
inline int f(int n) { return n + 1; }
inline double f(double n) { return n * 10; }

int main() {
	cout << f((int)3.4) + f(3.4) << endl;
	return 0;
}