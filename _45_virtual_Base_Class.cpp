#include <iostream>
using namespace std;

/*        student
        ____|_____
       |          |
      test        sports
       |___________|
            |
            result
*/

class Student
{
protected:
    int roll_number;

public:
    void set_rollnum(int m)
    {
        roll_number = m;
    }
    void print_rollnum()
    {
        cout << "The roll number is " << roll_number << endl;
    }
};

class test : virtual public Student
{
protected:
    int maths, physics;

public:
    void set_marks(int m, int p)
    {
        maths = m;
        physics = p;
    }
    void print_marks()
    {
        cout << "your marks in maths is " << maths << endl;
        cout << "your marks in physics is " << physics << endl;
    }
};

class sports : virtual public Student
{
protected:
    int score;

public:
    void set_score(int m)
    {
        score = m;
    }
    void print_score()
    {
        cout << "your score is sports overall is  " << score << endl;
    }
};





class result : public test, public sports// it will recieve only one copy of members of class student
{
private:
    int total_marks;

public:
    void display()
    {
        total_marks = maths + physics + score;
        print_rollnum();
        print_marks();
        print_score();
        cout << "Total marks of max is " << total_marks << endl;
    }
};

int main()
{
    result obj1;
    obj1.set_rollnum(2108880);
    obj1.set_marks(78, 22);
    obj1.set_score(100);
    obj1.display();

    return 0;
}