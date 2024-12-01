#include <iostream>
using namespace std;
// initializing values using constructor

class complex
{
    int a, b;

public:
    complex(void);// declaration of deafult constructor
    void printnum(void)
    {
        cout << "The values of a  is " << a << " and b is " << b<<endl;
    }
};

complex ::complex(void) // definition of deafult constructor
{
    a = 89;
    b = 10;
    cout<<"lol";
}

int main()
{
    complex c1,c2,c3;// default constructor is a automatically invoked each time when a object is created
    c1.printnum();
    c2.printnum();
    c3.printnum();

    return 0;
}