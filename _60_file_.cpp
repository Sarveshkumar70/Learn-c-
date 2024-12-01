#include <iostream>
#include <fstream> // contains 3 classes
using namespace std;

// fstreambase
// ifstream --> derived from fstreambase
// ofstream --> derived from fstreambase

// in order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
// 1. Using the constructor
// 2. Using the member function open() of the class

int main()
{
    string s="My favourite pet animal is capybara";
    //  Opening files using constructor and writing it
    // ofstream outtext("_60Sample_a_.txt"); // write operation
    // outtext<<s;

    string s2;
    // Opening files using constructor and reading it
    ifstream read("_60Sample_a_.txt"); // read operation
    getline(read,s2); // getline will read a line 
    // read>>s2;
    cout<<s2;
   
   return 0;
}