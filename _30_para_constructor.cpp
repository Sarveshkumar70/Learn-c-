#include <iostream>
using namespace std;
// Program  that's take co-ordinates of a POINT
class point
{
    int x, y;

public:
    point(int a, int b) // paramitrized constructor
    {
        x = a;
        y = b;
    }
    void displayPoint(void)
    {
        cout << "My co-ordinates of point are "
             << "(" << x << "," << y << ")" << endl;
    }
};
int main()
{
    point A(8, 8);
    A.displayPoint();
    point B(1, 9);
    B.displayPoint();

    return 0;
}