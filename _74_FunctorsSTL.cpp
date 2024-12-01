#include <iostream>
#include<functional>
#include<algorithm>
using namespace std;

//visi site: cpprefernece for more STL func.s
int main()
{
    //Function objects(Functors)--> A Function wrapped in a class so that it is available like an object
    int arr[]={4,5,8,7,29,1};
    // sort(arr,arr+5);
    // sort(arr,arr+6);
    sort(arr,arr+6,greater<int> ());// here greater<int> () is object[functor]
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
     
   return 0;
}