#include <iostream>
using namespace std;

// program to swap values using call by reference
class y;

class x
{
    int a;
    friend void exchange(x &, y &);

public:
    int givenum1(int num1)
    {
        a = num1;
        return a;
    }
    void printnum1(void)
    {
        cout << a << endl;
    }
};

class y
{
    int b;
    friend void exchange(x &, y &);

public:
    int givenum2(int num2)
    {
        b = num2;
        return b;
    }
    void printnum2(void)
    {
        cout << b << endl;
    }
};

void exchange(x &o1, y &o2)
{
    int temp = o1.a;
    o1.a = o2.b;
    o2.b = temp;
}

int main()
{
    x obj1;
    obj1.givenum1(10);
    y obj2;
    obj2.givenum2(4);
    cout << "Before swapping values " << endl;
    obj1.printnum1();
    obj2.printnum2();
    exchange(obj1, obj2);
    cout << "After swapping values " << endl;
    obj1.printnum1();
    obj2.printnum2();

    return 0;
}