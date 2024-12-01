#include <iostream>
using namespace std;

int main()
{
    
    int *ptr = new int(100);// basically it creates a object
    cout << "the value at ptr is " << *ptr << endl;
    delete ptr;// for deleting 


    int *b= new int[4];// keyword "new" dynamically allocates memory //basically  creates 4 objects
    b[0]=4;
    b[1]=8;
    b[2]=12;
    b[3]=16;

    delete[] b;// for deleting 
    cout<<"The value is "<<*b<<endl;
    cout<<"The value is "<<b[1]<<endl;
    cout<<"The value is "<<b[2]<<endl;
    cout<<"The value is "<<b[3]<<endl;

    return 0;
}