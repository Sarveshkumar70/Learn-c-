#include <iostream>
using namespace std;
// Function overloading

class complex
{
    int a, b;

public:
    void printnum(void)
    {
        cout << "The value of complex number " << a << " + " << b << "i" << endl;
    }

    complex(int x, int y)
    {
        a = x;
        b = y;
    }

    complex(int x)
    {
        a = x;
        b = 0;
    }
    complex()
    {
        a = 0;
        b = 0;
    }
};

int main()
{
    complex o1(4, 8);
    o1.printnum();

    complex o2(9);
    o2.printnum();

    complex o3;
    o3.printnum();

    return 0;
}