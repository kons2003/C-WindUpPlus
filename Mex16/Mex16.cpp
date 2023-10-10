#include <iostream>
#include <cstring>
using namespace std;

struct Point { int x, y; };
// ���� ���� ������ --
inline const Point operator--(Point& pt, int) { 
	Point st = pt;
	pt.x--;
	pt.y--;
	return st;
}

// ��� ������ <<
inline ostream& operator<<(ostream& out, const Point& pt) {
	out << pt.x << ":" << pt.y;
	return out;
}