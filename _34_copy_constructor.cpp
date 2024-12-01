#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number(void) { a = 0; } // default constructor
    number(int num)
    {
        a = num;
    }
    // when no copy consructor is found , compiler supplies its own copy constructor.
    // number(number &obj) // copy constructor
    // {
    //     cout << "Copy constructor is called" << endl;
    //     a = obj.a;
    // }

    void printnum(void)
    {
        cout << "The value of number is " << a << endl;
    }
};

int main()
{
    number o1(7), o2, o3, o4;
    o1.printnum();
    o2.printnum();
    o3.printnum();
    cout<<"see"<<endl;
    number x(o1); // copy constructor is invoked
    x.printnum();

    o4 = o1;// copy constructor not invoked    // but we have given value of o1 to o4  
    o4.printnum();  
    number o5 = o1; // copy constructor invoked
    o5.printnum();

    return 0;
}