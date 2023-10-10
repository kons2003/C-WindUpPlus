#include <iostream>
#include <cstring>
using namespace std;

struct Point { int x, y; };
// 후위 감소 연산자 --
inline const Point operator--(Point& pt, int) { 
	Point st = pt;
	pt.x--;
	pt.y--;
	return st;
}

// 출력 연산자 <<
inline ostream& operator<<(ostream& out, const Point& pt) {
	out << pt.x << ":" << pt.y;
	return out;
}