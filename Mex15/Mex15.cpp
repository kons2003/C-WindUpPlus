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
	// ����: �迭�� ũ��, default ���� 10
	// ���ڴ� �׻� ����� �־����� ������ ������ ��
	// ��� ���Ҹ� 0���� �ʱ�ȭ�� ��
	// ���� ������
	// deep copy ������� �����Ͽ� ����
};