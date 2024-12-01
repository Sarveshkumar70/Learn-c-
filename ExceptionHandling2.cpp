#include <iostream>
using namespace std;

//  There is a special catch block called the ‘catch all’ block, written as catch(…), that can be used to catch all types of exceptions. For example, in the following program, an int is thrown as an exception, but there is no catch block for int, so the catch(…) block will be executed.

int main()
{
    try 
    {
        cout<<"Entered the try"<<endl;
        throw 'c';
        cout<<"error is thrown";
    }

    catch(...)
    {
        cout<<"Inside catch block"<<endl;
    }
    cout<<"Exited the catch statement";
   
   return 0;
}