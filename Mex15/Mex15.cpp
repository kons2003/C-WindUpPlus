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
	// 인자: 배열의 크기, default 값은 10
	// 인자는 항상 양수가 주어지는 것으로 가정할 것
	// 모든 원소를 0으로 초기화할 것
	// 복사 생성자
	// deep copy 방식으로 복제하여 생성
};