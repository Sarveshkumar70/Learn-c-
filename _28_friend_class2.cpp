#include <iostream>
using namespace std;
// EASY program for addition of two values using friend func.
class y;

class x
{
    int a;

public:
    friend void myfunc(x, y);
    void indata(int num)
    {
        a = num;
    }
};

class y
{
    int b;

public:
    friend void myfunc(x, y);
    void indata(int num)
    {
        b = num;
    }
};

void myfunc(x o1, y o2)
{
    cout << "The sum of both inputs into objects is " << o1.a + o2.b << endl;
}

int main()
{
    x object1;
    object1.indata(7);
    y object2;
    object2.indata(100);
    myfunc(object1, object2);

    return 0;
}