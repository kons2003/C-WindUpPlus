#ifndef _ARRAY_H
#define _ARRAY_H
#include <stdexcept>
using namespace std;

class Array {
public:
	Array(int size = 10) : size_(size), mem_(NULL) {
		// TODO
		// size�� 0���� �۰ų� ������,
		// ������ ���� ������ runtime_error ��ü ��ȯ
		//    runtime_error("bad size")
		if (size <= 0) {
			throw runtime_error("bad size");
		}

		mem_ = new int[size];
	}
	virtual ~Array() {
		delete[] mem_;
		mem_ = NULL;
	}
	int& operator[](int index) const {
		// TODO
		// index�� ÷�� ������ �����,
		// ������ ���� ������ runtime_error ��ü ��ȯ
		//    runtime_error("bad index")

		if (index > size_ - 1) {
			throw runtime_error("bad index");
		}

		return mem_[index];
	}
private:
	int size_;
	int* mem_;
};
#endif
