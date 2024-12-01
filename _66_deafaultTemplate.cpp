#include <iostream>
using namespace std;

//template with default paramitrized
template <class t=int ,class T=float,class v=char>
class num
{
    t a;
    T b;
    v c;
    public:
    num(t a, T b, v c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void show(void)
    {
        cout<<"THe value of a is "<<a<<endl;
        cout<<"THe value of b is "<<b<<endl;
        cout<<"THe value of c is "<<c<<endl;
    }
};
int main()
{
    num<> obj1(1,4.5,'5');// just mention empty <> angular brackets with default paramitrized template like when we mention  empty () when calling function 
    obj1.show();
    cout<<endl;

    num <char ,float ,float> obj2('/',12.6,45.87); // we can also overwrite the default paramitrized template values
    obj2.show();

   return 0;
}