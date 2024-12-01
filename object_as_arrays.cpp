#include <iostream>
using namespace std;

class Employee
{
    int id;
    int count;

public:
    void getId(void)
    {
        cout << "Enter the value of id ";
        cin >> id;
    }
    void displayId(void)
    {
        cout << "The value of id is "<< id << endl ;
    }
};

int main()
{
    /*Employee harry;
    harry.getId();
    harry.displayId();
    */

    Employee harry[4];// if i want to create many objects it is more convinent to use  objects with arrays
    for (int i = 0; i < 3; i++)
    {
        harry[i].getId();
        harry[i].displayId();
    }

    return 0;
}