#include <iostream>
using namespace std;

double GetArea(double a, double b) {
	return a * b;
}

double GetArea(int r) {
	return r * r * 3.141592;
}

int main(void) {
	int sel;

	cout << "도형 선택 입력 (1:직사각형, 2:원): ";
	cin >> sel;

	if (sel == 1) {
		double a, b;

		cout << "가로, 세로 입력: ";
		cin >> a >> b;
		cout << "직사각형 면적: " << GetArea(a, b);
	}
	else if (sel == 2) {
		int r;
		cout << "반지름 입력: ";
		cin >> r;
		cout << "원 면적: " << GetArea(r);
	}
	else
		cout << "입력 오류!";

	return 0;
}