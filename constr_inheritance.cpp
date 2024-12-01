#include <iostream>
using namespace std;
class a
{
    int x;

public:
    a() { cout << "it1" << endl; }
    a(int m)
    {
        x = m;
        cout << "lol1" << endl;
    }
    int printl()
    {
        return x;
    }
};

class b
{
    int y;

public:
    b() { cout << "it2" << endl; }
    b(int m)
    {
        y = m;
        cout << "lol2" << endl;
    }
    int print2()
    {

        return y;
    }
};

class c : public a, virtual public b
{
    int k;

public:
    c(int m, int n, int s) : a(m), b(n)
    {
        cout << "yes3" << endl;
        k = s;
    }
    void display()
    {
        cout << printl() << endl;
        cout << print2() << endl;
        cout << k << endl;
    }
};

int main()
{
    c obj1(65, 5, 10);
    obj1.display();

    return 0;
}