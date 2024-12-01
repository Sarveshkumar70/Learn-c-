#include <iostream>
using namespace std;

class employee
{
public:
    int id;
    float salary;
    employee() {}

    employee(int m)
    {
        id = m;
        salary = 45;
    }

    void takeIn()
    {
        cout << "the id of employee is " << id << " and salary is " << salary << endl;
    }
};

/*syntax for derived class
class {{derived_class_name}} : {{visibility-mode}} {{base_class_name}}
{
    var/methods etc
}
*/

/*
NOTE:
1. default visibilty mode is private
2. Private visibilty mode: means that public members of base class become  private members of derived class
3.Public visibilty mode: means that public members of base class become  public members of derived class
4. private members of base class will never become members of derived class
*/

// creating a derived class programmer
class programmar : employee
{
public:
    int programCode = 9;
    programmar(int a)
    {
        id = a;
    }
    void takeNum()
    {
        cout << id << endl;
    }
};

int main()
{
    employee o1(1), o2(5);
    o1.takeIn();
    o2.takeIn();
    programmar o3(10);
    o3.takeNum();

    return 0;
}