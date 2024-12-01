#include <iostream>
using namespace std;

class base1 // first base class
{
protected:
    int a1;

public:
    void set_val_base1(int a)
    {
        a1 = a;
    }
};

class base2 // second base class
{
protected:
    int a2;

public:
    void set_val_base2(int a)
    {
        a2 = a;
    }
};

class base3 // third base class
{
protected:
    int a3;

public:
    void set_val_base3(int a)
    {
        a3 = a;
    }
};


class derived12 : public base1, public base2 ,public base3  // derived class
{
protected:
    int d;

public:
    void display()
    {
        cout << "The value of a1 from base1 is " << a1 << endl;
        cout << "The value of a2 from base2 is " << a2 << endl;
        cout << "The value of a3 from base3 is " << a3 << endl;
        cout << "The sum of these 3 numbers is " << a1+a2+a3 << endl;
    }
};

int main()
{
    derived12 obj1;
    obj1.set_val_base1(45);
    obj1.set_val_base2(89);
    obj1.set_val_base3(100);
    obj1.display();

    return 0;
}