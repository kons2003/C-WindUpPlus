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

	cout << "���� ���� �Է� (1:���簢��, 2:��): ";
	cin >> sel;

	if (sel == 1) {
		double a, b;

		cout << "����, ���� �Է�: ";
		cin >> a >> b;
		cout << "���簢�� ����: " << GetArea(a, b);
	}
	else if (sel == 2) {
		int r;
		cout << "������ �Է�: ";
		cin >> r;
		cout << "�� ����: " << GetArea(r);
	}
	else
		cout << "�Է� ����!";

	return 0;
}