#include <iostream>
using namespace std;

class MyException {
public:
    virtual void What() = 0;
};

class DivideZero : public MyException {
public:
    void What() {
        cout << "0���� ���� ���� �����ϴ�." << endl;
    }
};

class NegativeNumber : public MyException {
public:
    void What() {
        cout << "���� ���� ������ �ʽ��ϴ�." << endl;
    }
};

int main() {
    int num1, num2;

    cout << "2���� ���� �Է� : ";
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
        cout << "��Ÿ ���� �߻�" << endl;
    }

    cout << "��Ģ���� ����" << endl;

    return 0;
}
