#include <iostream>
using namespace std;

#include "_1_1_file_one.cpp"
#include "_1_1_file_Two.cpp"

int main()
{
// 1. 
   // display(); //Will give error since we have defined the same function two times[with no namespace in the two include files]

// 2.
//After putting display() fn. into their respective namespaces in the other two files
 //if we try to call it we will get error again but not for the same reason , we will get error because display() fn. is not avaible as global as it was before the declaration of namespaces , now it has become local to the namespace
    // display();

// 3.
    // one::display(); //display fn. of  namespace one
    // two::display();

// 4. by using keyword "using" with the namespace we include all the properties of that specific namespace
// using namespace two;
// display();
// cout<<"The value of x is "<<x;

// 5.
// using namespace one;
// using namespace two;
// display();// error because we have defined two namespaces 


    return 0;
}