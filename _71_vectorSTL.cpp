#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void display(vector<T> &v)
{
    cout<<"display fn:"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<" "<<v[i];
    }
    cout<<endl;
}

int main()
{
    vector<int> vec1;
   
    // int size,element;
    // cout<<"Enter the size of vector\n";
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter the value of element in vector: ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    //display(vec1);
    //vec1.pop_back();
 //   display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+2,10,6969);//(at place,no. of times,element) it is  used to insert an element in vactor
 //    display(vec1);

  vector<char> vec2(4); //4 element character vector 
   // display(vec2);

    //  vector<char> vec3(vec2); //4 element character vector vec2
    //  display(vec3);

    vector<int> vec4(5,8);
    display(vec4);
   
   return 0;
}