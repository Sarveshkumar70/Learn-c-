#include <iostream>
using namespace std;

class complex
{
    int a, b, c;

public:
    complex(int x, int y = 10)
    {
        a = x;
        b = y;
    }
    void printData(void)
    {
        cout << "The value of complex number is " << a << " + " << b << "i" << endl;
    }

//     complex(int x, int n = 78, int s = 28)
//     {
//         a = x;R
//         b = n;
//         c = s;
//     }

//     void printNum(void)
//     {
//         cout << "The value of  number a ,b and c is " << a << "," << b << " and " << c << " respectively" << endl;
//     }
 };
int main()
{
    // if we make constructors with default arguments then it may cause error in constructor overloading
    complex o1(5);
    o1.printData();
    //complex o1(5);//it will give error in function overloading
    //o1.printNum();

    return 0;
}