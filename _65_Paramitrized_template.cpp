#include <iostream>
using namespace std;

// syntax for paramitrized template-->
template <class T1, class T2, class T3>
class comparison 
{
    T1 a;
    T2 b;
    T3 c;
    public:
    comparison(T1 a1,T2 b1,T3 c1 )
    {
        a=a1;
        b=b1;
        c=c1;
    }
    void display()
    {
        cout<<"The three charactrers are "<< a <<" "<<b<<" "<<c<<endl;
    }
};

int main()
{
    comparison<char ,char,char> obj1('[','/','>');
    obj1.display();
   
   return 0;
}