#include <iostream>
#include <cstring>
using namespace std;

class Ary {
private:
	const int s; // 동적 배열의 크기
	int* a; // 동적 배열 메모리
public:
	~Ary() { delete[] a; }
	// 일반 생성자
	Ary(int size = 10) : s(size), a(new int[size]) {
		for (int i = 0; i < size; i++)
			a[i] = 0;
	}
	// 복사 생성자
	Ary(const Ary& ary) : s(ary.s), a(new int[ary.s]) {
		for (int i = 0; i < ary.s; i++) 
			a[i] = ary.a[i];
	}
};