#include <iostream>
using namespace std;
// for increment and decrement operator
class integer
{
    int x;
    public:
    void get(int a){
        x=a;
    }
    void show()
    {
        cout<<x<<" ";
    }
    integer operator ++()// for pre increment
    {
        integer i;
        i.x=++x; // here x is of calling object

        return i;
    }
    integer operator ++(int)// for post increment [here int is passed only to create  diferentiate between pre and post incerment so that compiler will be able to differentiate them properly not confuse them] int have no other meaning
    {
        integer i;
        i.x=x++; // here x is of calling object

        return i;
    }
};
int main()
{
    integer i1,i2;
    i2.get(4);
    // i1=++i2; // for pre increment
    // // or i1=i2 operator ++();
    // i2.show();
    // i1.show();

    i1=i2++; // for post increment
    // or i1=i2 operator ++();
    i2.show();
    i1.show();
   return 0;
}