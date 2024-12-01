#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void getNum(int num1, int num2)
    {
        a = num1;
        b = num2;
    }

    void addObjectBySum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printnum(void)
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex obj1, obj2, obj3;
    obj1.getNum(5, 6);
    obj1.printnum();

    obj2.getNum(2, 3);
    obj2.printnum();

    obj3.addObjectBySum(obj1, obj2);
    obj3.printnum();

    return 0;
}