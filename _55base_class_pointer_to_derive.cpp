#include <iostream>
using namespace std;

class base
{
public:
    int base_var;
    void display()
    {
        cout << "The value of base_var in base class is " << base_var << endl;
    }
};
class derived : public base
{
public:
    int derived_var;
    void display()
    {
        cout << "The value of base_var in base class is " << base_var << endl;
        cout << "The value of derived_var in derived class is " << derived_var << endl;
    }
};
int main()
{
    base *p1,obj1;
    derived *p2, obj2;
    p1=&obj2;// pointer of base class can point towards  the  object of derived class but it can only call memebers of base class

    p1->base_var=4;
    p1->display();//it will the display function of base class, you cannot access the derived class display function or other memebers through this
    //p1->derived_var=8;//this will trow error 
    p2=&obj2;
    p2->base_var=46;
    p2->derived_var=121;
    p2->display();
    

    return 0;
}