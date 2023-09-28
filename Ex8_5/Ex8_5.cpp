#include <iostream>
using namespace std;

class Array
{
public:
	Array(const Array& ary) : count_(ary.count_), ary_(new int[count_]) // 汗荤 积己磊
	{
		for (int i = 0; i < count_; ++i)
			ary_[i] = ary.ary_[i];
	}
	Array(int ary) : count_(ary), ary_(new int[count_]) // 老馆 积己磊
	{ 
		for (int i = 0; i < ary; ++i)
			ary_[i] = i;
	} 
	~Array() { delete[] ary_; }

	Array& Set(int a, int b)
	{
		ary_[a] = b;
		return *this;
	}
	void Print() const 
	{
		for (int i=0; i<count_; i++)
			cout << ary_[i] << " ";
		cout << endl;
	}

private:
	int count_;
	int* ary_;
};

int main() {
	Array ary1(5);
	Array ary2(7);
	Array ary3(ary1);

	ary2.Set(0, 11).Set(1, 12).Set(2, 13);

	ary1.Print();
	ary2.Print();
	ary3.Print();

	return 0;
}