#include <iostream>
using namespace std;

class a
{
    int x,y;
    public:            
   //  a(int m,int n):x(y),y(n)  [error] writing this will actually print the address of x, because  y is declared after declaration of x  in starting of class.   
    //a(int m,int n):x(m),y(n)  //normal one
    a(int m,int n):y(n+m),x(n)//you can do this
    {
        cout<<"The value of x is "<<x<<" and y is "<<y<<endl;
    }
};
int main()
{
    a obj1(8,5);
   
   return 0;
}