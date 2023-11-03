#include <iostream>
using namespace std;

#define PI 3.14

class Circle {
public:
    Circle(int x, int y, double radius) :
        x_(x), y_(y), radius_(radius) {}
    double GetArea() { return PI * radius_ * radius_; }
protected:
    int x_, y_;
    double radius_;
};

class Sphere : public Circle {
public:
    Sphere(int x, int y, int z, double radius) : Circle(x, y, radius), z_(z) {}
    double GetArea() { return 4 * PI * radius_ * radius_; }
    double GetVolume() { return 4.0 / 3.0 * PI * radius_ * radius_ * radius_; }
private:
    int z_;
};

int main() {
    Sphere sph(1, 1, 1, 1);
    Circle* p_cir = &sph;

    cout << "Ç¥¸éÀû : " << p_cir->GetArea() << endl;
    cout << ((Sphere*)p_cir)->GetVolume() << endl;

    return 0;
}