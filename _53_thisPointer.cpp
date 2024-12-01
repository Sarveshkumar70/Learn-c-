// #include <iostream>
// using namespace std;
// class a
// {
//     int b;
//     public:
//     void setData(int b)
//     {
//        this->b=b;
//     }
//     void printData(void)
//     {
//         cout<<"the value of a is "<< b<<endl;
//     }
// };
// int main()
// {
//     a obj1;
//     obj1.setData(4);
//     obj1.printData();
//    return 0;
// }

#include<iostream>
using namespace std;

/* local variable is same as a member's name */
class Test
{
private:
int x;
public:
void setX (int x)
{
	// The 'this' pointer is used to retrieve the object's x
	// hidden by the local variable 'x'
	this->x = x;
}
void print() { cout << "x = " << x << endl; }
};

int main()
{
Test obj;
int x = 20;
obj.setX(x);
obj.print();
return 0;
}
