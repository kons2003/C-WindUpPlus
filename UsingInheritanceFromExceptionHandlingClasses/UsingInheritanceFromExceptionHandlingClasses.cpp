#include <iostream>
using namespace std;

class MyException {
public:
    virtual void What() = 0;
};

class DivideZero : public MyException {
public:
    void What() {
        cout << "0으로 나눌 수는 없습니다." << endl;
    }
};

class NegativeNumber : public MyException {
public:
    void What() {
        cout << "음수 값은 허용되지 않습니다." << endl;
    }
};

int main() {
    int num1, num2;

    cout << "2개의 정수 입력 : ";
    cin >> num1 >> num2;

    try {
        if (num2 == 0)
            throw DivideZero();
        if (num1 < 0 || num2 < 0)
            throw NegativeNumber();

        cout << "+ : " << num1 + num2 << endl;
        cout << "- : " << num1 - num2 << endl;
        cout << "* : " << num1 * num2 << endl;
        cout << "/ : " << num1 / num2 << endl;
    }
    catch (MyException& ex) {
        ex.What();
    }
    catch (...) {
        cout << "기타 예외 발생" << endl;
    }

    cout << "사칙연산 종료" << endl;

    return 0;
}
