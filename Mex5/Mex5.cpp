#include <iostream>
#include <cstring>
using namespace std;

inline void f(int& n) { n += 2; }
inline void g(int n) { n += 3; }
int main() {
	int a = 1;
	f(a);
	g(a);
	cout << a << endl;
	return 0;
}