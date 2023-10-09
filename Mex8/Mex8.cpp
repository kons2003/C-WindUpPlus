#include <iostream>
#include <cstring>
using namespace std;

struct X{
 X() { n++; }
 ~X() { n--; }
 static int n;
};
int X::n;
int main() {
	{
		X x1, x2;
		cout << X::n << endl; // (. . .)
	}
	X x[5];
	cout << x[0].n << endl; // (. . .)
	return 0;
}