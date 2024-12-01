#include <iostream>
using namespace std;

class complex
{
    int a1, b1;

public:
    void setData(int a, int b)
    {
        a1 = a;
        b1 = b;
    }
    void printData(void)
    {
        cout << "The value of real part is " << a1 << endl;
        cout << "The value of imaginary part is " << b1 << endl;
    }
};

int main()
{
    // complex c1;
    // complex *obj1= &c1;
    // (*obj1).setData(45,7);
    // (*obj1).printData();
 // you can use above way or below one,to access the members of  pointer
    // obj1->setData(45, 7);
    // obj1->printData();
    
    complex *obj2 = new complex;
    obj2->setData(45, 7);
    obj2->printData();

    
    complex *obj3 = new complex[4];//this basically creates 4 objects
    (obj3+1)->setData(1, 15);
    (obj3+1)->printData();
    return 0;
}