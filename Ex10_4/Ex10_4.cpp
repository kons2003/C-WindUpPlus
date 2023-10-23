#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
using namespace std;

class Date {
public:
	Date(int year, int month, int day) : year_(year), month_(month), day_(day) {}
	void Print() { cout << year_ << "년 " << month_ << "월 " << day_ << "일" << endl; }
protected:
	int year_, month_, day_;
};

class Time {
public:
	Time(int hour, int minute, int second) : hour_(hour), minute_(minute), second_(second) {}
	void Print() { cout << hour_ << "시 " << minute_ << "분 " << second_ << "초" << endl; }
protected:
	int hour_, minute_, second_;
};

class DateTime : public Date, public Time {
public:
	DateTime(int year, int month, int day, int hour, int minute, int second, const char* to_do = "Unknown")
		: Date(year, month, day), Time(hour, minute, second), len_(strlen(to_do)), to_do_(new char[len_ + 1])
	{
		strcpy(to_do_, to_do);
	}
	~DateTime() { delete[] to_do_; }

	void Print() { 
		Date::Print();
		Time::Print();
		cout << "할 일: " << to_do_ << endl;
	}
private:
	int len_;
	char* to_do_;
};

int main() {
	DateTime dt(2023, 10, 23, 22, 10, 30, "C++프로그래밍 과제하기");
	dt.Print();

	return 0;
}