#include <iostream>
using namespace std;

class PointX {
public:
	PointX(int x) : x_(x) { cout << "PointX 持失切" << endl; }
	~PointX() { cout << "PointX 社瑚切" << endl; }
	void Print() { cout << "PointX" << endl; }
protected: int x_;
};

class PointXY : public PointX {
public:
    PointXY(int x, int y) : PointX(x), y_(y)
    {
        cout << "PointXY 持失切" << endl;
    }
    ~PointXY() { cout << "PointXY 社瑚切" << endl; }
    void Print() { cout << "PointXY" << endl; }
protected:
    int y_;
};

class PointXZ : public PointX {
public:
    PointXZ(int x, int z) : PointX(x), z_(z)
    {
        cout << "PointXZ 持失切" << endl;
    }
    ~PointXZ() { cout << "PointXZ 社瑚切" << endl; }
    void Print() { cout << "PointXZ" << endl; }
protected: 
    int z_;
};

class PointXYZ : public PointXY, public PointXZ {
public:
    PointXYZ(int x, int y, int z) : PointXY(x, y), PointXZ(x, z), xyz_(0)
    {
        cout << "PointXYZ 持失切" << endl;
    }
    ~PointXYZ() { cout << "PointXYZ 社瑚切" << endl; }
    void Print() {
        PointXY::PointX::Print();
        PointXZ::PointX::Print();
        PointXY::Print();
        PointXZ::Print();
        cout << "PointXYZ" << endl;
    }
private: 
    int xyz_;
};

int main() {
    PointXYZ Pxyz(1, 2, 3);
    Pxyz.Print();
    return 0;
}