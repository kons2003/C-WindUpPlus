#include <iostream>
#include <cstring>
using namespace std;

class Ary {
private:
	const int s; // ���� �迭�� ũ��
	int* a; // ���� �迭 �޸�
public:
	~Ary() { delete[] a; }
	// �Ϲ� ������
	Ary(int size = 10) : s(size), a(new int[size]) {
		for (int i = 0; i < size; i++)
			a[i] = 0;
	}
	// ���� ������
	Ary(const Ary& ary) : s(ary.s), a(new int[ary.s]) {
		for (int i = 0; i < ary.s; i++) 
			a[i] = ary.a[i];
	}
};