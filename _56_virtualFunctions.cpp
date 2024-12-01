#include <iostream>
using namespace std;

class base
{
public:
    int base_var=10;
    virtual void display() // here by writing virtual fn. if we point base class pointer to derived class object then if we access display function by -> operator  then it will run the derived class display function rather  than base class  display function  
    {
        cout << "The value of base_var in base class is " << base_var << endl;
    }
};

class derived : public base
{
public:
    int derived_var=20;
    void display()
    {
        cout << "The value of base_var in base class is " << base_var << endl;
        cout << "The value of derived_var in derived class is " << derived_var << endl;
    }
};

int main()
{
    base *base_class_pointer;
    base base_object;
    derived derived_object;

    base_class_pointer=&derived_object;
    base_class_pointer->display(); // The main thing to note here is that if we don’t use the “virtual” keyword with the “display” function of the base class then beside of the point that we have pointed our base call pointer to derived class object still the compiler would have called the “display” function of the base class because this is its default behavior as we have seen in the previous tutorial.
// But we have used the “virtual” keyword with the “display” function of the base class to make is virtual function so when the display function is called by using the base class pointer the display function of the derived class will run because the base class pointer is pointing to the derived class object 
}