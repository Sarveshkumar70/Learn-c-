#include <iostream>
using namespace std;

class base
{
public:
    void fun1() { cout << "base1" << endl; }
    virtual void fun2() { cout << "base2" << endl; }
    virtual void fun3() { cout << "base3" << endl; }
    virtual void fun4() { cout << "base4" << endl; }
};

class derived : public base
{
public:
    void fun1() { cout << "derived1" << endl; }
    void fun2() { cout << "derived2" << endl; }
    void fun4(int x) { cout << "derived1" << endl; }
};
int main()
{
    base*p;
    derived obj1;

    p=&obj1;

    p->fun1();//early binding because func()1 is non virtual in base classs
    p->fun2();// late binding
    p->fun3();// late binding
    p->fun4();// late binding


    return 0;
}