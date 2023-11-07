#include <iostream>
using namespace std;

#define PI 3.14

class Circle {
public:
    Circle(int x, int y, double radius) :
        x_(x), y_(y), radius_(radius) {}
    virtual double GetArea() { return PI * radius_ * radius_; }
protected:
    int x_, y_;
    double radius_;
};

class Sphere : public Circle {
public:
    Sphere(int x, int y, int z, double radius) :
        Circle(x, y, radius), z_(z) {}
    double GetArea() { return 4 * PI * radius_ * radius_; }
private:
    int z_;
};

void OutArea(Circle* p_cir)
{
    cout << p_cir->GetArea() << endl;
}
void OutArea(Circle& r_cir)
{
    cout << r_cir.GetArea() << endl;
}

int main() {
    Circle cir(1, 1, 1);
    Sphere sph(1, 1, 1, 1);

    cout << cir.GetArea() << endl;
    cout << sph.GetArea() << endl;

    OutArea(&cir);
    OutArea(&sph);
    OutArea(cir);
    OutArea(sph);

    return 0;
}