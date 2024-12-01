#include <iostream>
using namespace std;

class base
{
    int data1; // private data member and it cannot be inherited but we can get its value if we define it in a inherited method like here getData1();

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

class derived : private base // derived class publically from base class
{
    int data3;

public:
    int process();
    void print();
};

int derived::process()
{
    setData();   //this is difference 
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
       //obj1.setData();// we cannot call it because it is private memeber inherited from base class and we cannot call private members directly by object we have to define them in a method. thats what i have done in process();
    obj1.process();
    obj1.print();

    return 0;
}