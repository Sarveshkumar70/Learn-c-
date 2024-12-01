#include <iostream>
using namespace std;
int count;
class number
{
    int a;
    public:
    number(void)
    {
        count++;
        cout<<"constructor is called "<<count<<endl;
    }
    ~number()
    {
        cout<<"destructor is called "<<count<<endl;
        count--;
    }
};
int main()
{
  cout<<"We have entered in our main function"<<endl;
  cout<<"We are creating an object"<<endl;
  number n1;
  {
    cout<<"Entered the block"<<endl;
    cout<<"creating object "<<endl;
    number n2;
    cout<<"lol"<<endl;
  }
  cout<<"exited the block"<<endl;
   
   return 0;
}