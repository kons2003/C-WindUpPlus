#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int a = 1;
	int& b = a;
	a++; b++;
	cout << a + b << endl;
	return 0;
}