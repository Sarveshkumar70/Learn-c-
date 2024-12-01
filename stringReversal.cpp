// #include <iostream>
// #include <cstring>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     string str;
//     cout<<"Enter the string:\n";
//     getline(cin,str);// getline will work with only string not with char

//     cout<<"Before reversing the string:\n";
//     cout<<str<<"\n";

//     cout<<"After reversing the string:\n";
//     reverse(str.begin(),str.end());//reverse function is defined in the algorithm header file  
//     cout<<str;
   
//    return 0;
// }


// or

#include <iostream>
using namespace std;

int main()
{
   string s="Her name is capybara";
   cout<<"After reversing the string\n ";
   for (int i = s.length()-1; i>=0; i--)
   {
     cout<<s[i];
   }
   return 0;
}
