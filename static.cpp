#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // count is a static varaible and if create objects it will not make differnet memory loctaion for them but will share common memory space

public:
    void setData(void);
    void getData(void);
    static void getCount(void) // static function
    {
        cout << "The value of count is " << count << endl;
    }
};

int Employee::count; // default value of static variable is zero but if you want to initailize it with some value you have to do it out of class like
// int Employee::count = 10000;

void Employee::setData(void)
{
    cout << "Enter the id " << endl;
    cin >> id;
    count++;
}

void Employee ::getData(void)
{
    cout << "The id is " << id << " and the no. of employee is " << count << endl;
}

int main()
{
    Employee rahul, raman, harsh;
    rahul.setData();
    rahul.getData();
    Employee::getCount(); // calling  static function does not require object

    raman.setData();
    raman.getData();
    Employee::getCount();

    harsh.setData();
    harsh.getData();
    Employee::getCount();

    return 0;
}