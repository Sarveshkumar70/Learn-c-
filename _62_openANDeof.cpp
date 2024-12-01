#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream hout;
    hout.open("_62.txt");
    hout<<"my favourite anime is one piece"<<endl;
    hout<<"and i also like Redo of healer"<<endl;
    hout.close();

    string s1;
    ifstream hin;
    hin.open("_62.txt");
    while (hin.eof()==0)
    {
        getline(hin,s1);
        cout<<s1<<endl;
    }
    hin.close();
    
   return 0;
}