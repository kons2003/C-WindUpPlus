#include <iostream>
using namespace std;

class Time {
public:
	Time(int hour = 0, int minute = 0, int second = 0) : hour_(hour), minute_(minute), second_(second) {}

	Time operator+(const Time& time)
	{
		int hour = hour_ + time.hour_;
		int minute = minute_ + time.minute_;
		int second = second_ + time.second_;

		if (second >= 60)
		{
			minute++;
			second -= 60;
		}
		if (minute >= 60) 
		{
			hour++;
			minute -= 60;
		}
		
		return Time(hour, minute, second);
	}
	void Print() 
	{
		cout << hour_ << "½Ã " << minute_ << "ºÐ " << second_ << "ÃÊ" << endl;
	}

private:
	int hour_;
	int minute_;
	int second_;
};

int main() {
	Time time1(4, 50, 40);
	Time time2(3, 40, 30);
	Time time3 = time1 + time2;

	time1.Print();
	time2.Print();
	time3.Print();

	return 0;
}