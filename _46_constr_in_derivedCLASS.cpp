#include <iostream>
using namespace std;

class base1
{
    int data1;

public:
    base1(int a)
    {
        data1 = a;
        cout << "Constructor of BASE1 class is called" << endl;
    }
    void print1(void)
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};

class base2
{
    int data2;

public:
    base2(int b)
    {
        data2 = b;
        cout << "Constructor of base2 class is called" << endl;
    }
    void print2(void)
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};

class derived : public base1, public base2
{
    int derived1;
    int derived2;

public:
    derived(int m, int n, int s, int p) : base1(m), base2(n)//the order here for special type of constructor doesn't matter it will execute in order in which the class is inherited 
    // like class derievd has inherited first class base1 and then class base2
    // therefore constructor of base1 will be called  first the of class base2 and then at last of derived class
    {
        derived1=s;
        derived2=p;
        cout << "derived class contructor was called " << endl;
    }
    void printdDerived(void)
    {
        cout << "The value of derived1 is " << derived1
             << " The value of derived2 is " << derived2 << endl;
    }
};

int main()
{
    derived obj1(4,8,45,98);
    obj1.print1();
    obj1.print2();
    obj1.printdDerived();

    return 0;
}