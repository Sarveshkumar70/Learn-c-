#include <iostream>
using namespace std;
// example of --> operator overloading using binary operator
class complex
{
private:
    int a, b;

public:
    void get(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << a << " ";
        cout << b;
    }
    complex operator +(complex c)
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;

        return (temp);
    }
};
int main()
{
    complex c1, c2, c3;
    c1.get(4, 5);
    c2.get(7, 3);
    c3 = c1+(c2);// or c3 = c1.operator+(c2);
    // two operands are needed in binary operator here those two operators are c1 and c2
    // It is rule in binary operator that calling object is always in left like here c1 is calling object
    c3.show();

    return 0;
}