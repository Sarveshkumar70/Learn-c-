#include <iostream>
using namespace std;

// nested of try/catch
int main()
{
    try
    {
        cout << "lol1" << endl;
        try
        {
            cout << "lol2" << endl;
            throw 1;
        }
        catch (int x)
        {
            cout << "lol3" << endl;
            throw 'u';
        }
    }

    catch (...)
    {
        cout << "lol4";
    }

    return 0;
}
