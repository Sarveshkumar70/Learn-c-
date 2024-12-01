#include <iostream>
using namespace std;

// int add1(int a ,int b)
// {
//     int c= a+b;
//     printf("The addition of these two terms is %d\n",c);
//     return c;
// }
// float add2(float a ,float b)
// {
//     float c= a+b;
//     printf("The addition of these two terms is %.2f\n",c);
//     return c;
// }

// instead of making two differnet functions like above i can use function-templates 
template <class T1,class T2>
T1 add1(T1 a ,T2 b)
{
    T1 c= a+b;
    printf("The addition of these two terms is %dokji\n",c);
}

template <class T3,class T4>
float swapp (T3 &n,T4 &m)
{
    T4 temp;
    temp=n;
    n=m;
    m=temp;
//    cout<<"The value of x after swapping is "<<n<<" and y is "<<m<<" respectively"<<endl;
}

int main()
{
     add1<int,int> (40,2);
   // add2(4.23913,4554);
   float x=4.2,y=8.64;
   swapp<float,float>(x,y);
   cout<<"The value of x after swapping is "<<x<<" and y is "<<y<<" respectively";

   return 0;
}