#include <iostream>
using namespace std;

int count=0;
class num
{
public:
    num()
    {
        count++;
        cout << "constructor is called " << count << " time" << endl;
    }
    ~num()
    {
        cout << "destructor is called " << count << " time" << endl;
        count--;
    }
};
int main()
{
    cout << "Here is starting of our main function" << endl;
    cout << "creating the object" << endl;

    num n1;
    {
        cout << "In the block" << endl;
        cout << "creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting block" << endl;
    }
    cout << "outside of block" << endl;

    return 0;
}