#include <iostream>
using namespace std;

class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int sumRealPart(complex, complex);
    int sumcompPart(complex, complex);
};

class complex
{
    int a, b;
    // giving permission to access the members of this class only to two functions below
//  friend int calculator::sumRealPart(complex, complex);
//  friend int calculator::sumcompPart(complex, complex);
    // but if we need to access like 10 or more functions instead of making friend individually we will make the whole calcultor as friend
    friend class calculator;


public:
    void setnum(int num1, int num2)
    {
        a = num1;
        b = num2;
    }

    void printnum(void)
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};

int calculator::sumRealPart(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator::sumcompPart(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex obj1, obj2;
    obj1.setnum(1, 2);
    obj2.setnum(5, 6);

    calculator calc;
    int res=calc.sumRealPart(obj1,obj2);
    cout<<"The value of real part is "<<res<<endl;

    int resc=calc.sumcompPart(obj1,obj2);
    cout<<"The value of complex part is "<<resc<<endl;

    return 0;
}