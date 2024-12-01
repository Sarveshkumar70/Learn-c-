#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // connecting our  file with outInFile stream
    ofstream outInFile("_61_.txt");
    // create a string varaible and take input from user
    string name;
    cout << "Enter the string you want " << endl;
    getline(cin, name);
    //writing the string to our file
    outInFile <<name +" WRITTEN BY YOUR TIMOTHY";
    outInFile.close();// closing the connection of our file with stream


    string n;
    ifstream hin("_61_.txt");
    getline(hin,n);
    cout<<"The contents of this file is: ";
    cout<<n;
    hin.close();

    return 0;
}