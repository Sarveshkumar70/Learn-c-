#include <iostream>
using namespace std;

template <class T>
class A
{
    T a;
    public:
    A(T a)
    {
        this->a=a;
    }
    void display();
};
template <class T>
void A <T> ::display()
{
    cout<<"The value of a is "<<a<<endl;
}

int addition(int a,int b)
{
    cout<<"non-template function "<<a+b<<endl;
}

template<class T1>
T1 addition(T1 a,T1 b)
{
    cout<<"template function "<<a+b<<endl;
}
int main()
{
    A<char> obj1('k');
    obj1.display();
    addition(35,7);// exactly matching function will take priority as compared to template function
   
    return 0;
}