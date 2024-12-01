#include <iostream>
using namespace std;

struct classRoom
{
    int rollnum;
    char favChar;
    float aveMark;
} x12;

union amountInKg
{
    int rice;
    char kidneyBeans;
    float gurh;
} k1;

int main()
{
    /* struct classRoom x12 ;
     x12.rollnum = 45;
     x12.favChar = '&';
     x12.aveMark = 89.1245;

     cout << "The value is " <<x12.rollnum << '\n';
     cout << "The value is " << x12.favChar << '\n';
     cout << "The value is " << x12.aveMark << '\n';
    */

    // union
    union amountInKg;
    k1.kidneyBeans = 1;
    cout << k1.kidneyBeans;
    k1.gurh = 45;
    cout << k1.gurh << endl;

    return 0;
}