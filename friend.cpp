#include <iostream>
using namespace std;

class data
{
    int number;
    friend int addfive(data obj1);

public:
    void initinum(void)
    {
        number = 0;
    }
};

int addfive(data obj1)
{
    obj1.number += 5;
    return obj1.number;
}

int main()
{
    data o1;
    o1.initinum();
    cout << "The value is " << addfive(o1);

    return 0;
}