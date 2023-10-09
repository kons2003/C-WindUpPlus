#define M1(x) x * x
#define M2(x) (x) * (x)

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int a = M1(2 + 3);
	int b = 20 / M2(2);
	cout << a + b << endl;
	return 0;
}