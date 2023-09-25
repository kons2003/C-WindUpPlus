#include <iostream>
using namespace std;

class Shape {
public:
	Shape(int type = 1, int len = 0) : type_(type), len_(len) 
	{
		if (type_ == 1) 
			rectCount_++;
		else if (type_ == 2) 
			circleCount_++;
	}
	~Shape() 
	{
		if (type_ == 1)
			rectCount_--;
		else if (type_ == 2)
			circleCount_--;
	}

	double GetArea() const 
	{ 
		if (type_ == 1)
			return (len_ * len_);
		else if (type_ == 2)
			return (len_ * len_ * PI); 
	}
	static int GetRectCount() { return rectCount_; }
	static int GetCircleCount() { return circleCount_; }

private:
	int type_; // ���簢�� or ��
	double len_; // �� ���� ���� or ������
	const double PI = 3.14;
	static int rectCount_;
	static int circleCount_;
};

int Shape::rectCount_ = 0;
int Shape::circleCount_ = 0;

int main() {
	Shape shape1(1, 5);
	Shape shape2(2, 5);
	Shape* p_rect = new Shape[3];

	cout << "�簢�� ����   : " << Shape::GetRectCount() << endl;
	cout << "�� ����       : " << Shape::GetCircleCount() << endl;
	cout << "shape1�� ���� : " << shape1.GetArea() << endl;

	delete[] p_rect;

	cout << "�簢�� ����   : " << Shape::GetRectCount() << endl;
	cout << "�� ����       : " << Shape::GetCircleCount() << endl;
	cout << "shape2�� ���� : " << shape2.GetArea() << endl;

	return 0;
}