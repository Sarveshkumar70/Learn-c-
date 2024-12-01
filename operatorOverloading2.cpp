#include <iostream>
using namespace std;
// example of --> operator overloading using unary operator

class complex
{
    int a,b;
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
    complex operator -()
    {
        complex temp;
        temp.a=-a;
        temp.b=-b;

        return (temp);
    }
};
int main()
{
    complex c1,c2;
    c1.get(4,65);
    c2=-c1;      // only one operand is needed for unary operator 
//or c2=c1.operator -();
// meaning and behaviour of operators remains same as they are normally known
    c2.show();
   
   return 0;
}