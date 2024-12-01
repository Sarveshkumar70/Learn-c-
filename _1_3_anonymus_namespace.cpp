#include <iostream>
using namespace std;

namespace
{
    int x;
    void display();
}
namespace
{
    void display()
    {
        cout<<"Value of x is "<<x;
    }
}

int main()
{
    x=504;
    display();
   
   return 0;
}