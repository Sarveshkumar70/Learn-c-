#include <iostream>
using namespace std;

int main()
{
    int x=-1;
    try
    {
        cout<<"Before throwing error"<<endl;
        if (x<0)
        {
            throw x;
            cout<<"LOL"<<endl;// error is detected so this statement is skipped
        }
        cout<<"error is thrown"<<endl;
    }
    // no statement should be here

    
    catch(int  y)//catch's parameter should match the data type of thrown error
    {
        cout<<"program cannot be executed"<<endl;
    }
    cout<<"Exited the catch";

   
   return 0;
}