#include <iostream>
using namespace std;

//  When an exception is thrown, all objects created inside the enclosing try block are destroyed before the control is transferred to the catch block.
class Test
{
    public:
    Test()
    {
        cout<<"constructor is called"<<endl;
    }
    ~Test()
    {
        cout<<"destructor is called"<<endl;
    }
};
int main()
{
    try 
    {
        Test t;
        throw 10;
        cout<<"Error is thrown"<<endl;
    }
    catch(...)
    {
        cout<<"in the catch";
    }
   
   return 0;
}