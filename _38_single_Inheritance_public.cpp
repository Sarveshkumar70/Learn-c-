#include <iostream>
using namespace std;

class base
{
    int data1;//private data member and it cannot be inherited but we can get its value if we define it in a inherited method like here getData1();

public:
    int data2;
    void setData(void);
    int getData1();
    int getData2();
};

void base::setData()
{
    data1 = 12;
    data2 = 13;
}

int base::getData1()
{
    return data1;
}

int base::getData2()
{
    return data2;
}

class derived : public base // derived class publically from base class
{
    int data3;

public:
    int process();
    void print();
};

int derived::process()
{
    return data3 = data2 * getData1();
}
void derived::print()
{
    cout << "The value of data1 is " << getData1() << endl;
    cout << "The value of data2 is " << getData2() << endl;
    cout << "The value of data3 is " << process() << endl;
}

int main()
{
    derived obj1;
    obj1.setData();
    obj1.process();
    obj1.print();

    return 0;
}