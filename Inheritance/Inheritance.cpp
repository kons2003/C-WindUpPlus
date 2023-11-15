#include <iostream>
using namespace std;

class Shape {
public:
	virtual double area() = 0;
};

class Rectangle : public Shape {
	double width;
	double height;
public:
	Rectangle(double width, double height) : width(width), height(height) {	}

	double area() {
		return width * height;
	}
};

class Circle : public Shape {
	double radius;
public:
	Circle(double radius) : radius(radius) {}

	double area() {
		return radius * radius * 3.14;
	}
};

int main() {
	Shape* arr[2];
	
	arr[0] = new Rectangle(1.0, 2.0);
	arr[1] = new Circle(3.0);

	cout << "Rectangle: " << arr[0]->area() << endl;
	cout << "Circle: " << arr[1]->area() << endl;
}