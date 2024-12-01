#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int n);
    void print_roll_number(void);
};

void student ::set_roll_number(int n)
{
    roll_number = n;
}

void student::print_roll_number(void)
{
    cout << "The roll number is " << roll_number << endl;
}

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void get_marks(void)
    {
        cout << "The marks in mathematics is " << maths << endl;
        cout << "The marks in physics is " << physics << endl;
    }
};

class result : public exam
{
    float percentage;

public:
    void display_result(void)
    {
        print_roll_number();
        get_marks();
        cout << "THe marks in percentage is " << (maths + physics) / 2 << endl;
    }
};
int main()
{
    result obj1;
    obj1.set_roll_number(45);
    obj1.set_marks(89, 87);
    obj1.display_result();

    return 0;
}