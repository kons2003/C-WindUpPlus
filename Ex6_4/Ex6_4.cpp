#include <iostream>
#include <cstring>
using namespace std;

class Student {
public:
	Student() : name_{}, number_(0), age_(0) {}
	Student(const char* name, int number, int age) : number_(number), age_(age) {
		strcpy(name_, name);
	}
	~Student() { delete[] name_; }

	void Print() { cout << name_ << number_ << age_ << endl; }
	void SetName(const char* name) { strcpy(name_, name); }
	void SetNumber(int number) { number_ = number; }
	void SetAge(int age) { age_ = age; }
private:
	char name_[20];
	int number_;
	int age_;
};

int main() {
	Student st1("홍길동", 11111111, 25);
	Student st2;

	st1.Print();
	st2.Print();

	st2.SetName("이순신");
	st2.SetNumber(22222222);
	st2.SetAge(30);

	st2.Print();

	return 0;
}