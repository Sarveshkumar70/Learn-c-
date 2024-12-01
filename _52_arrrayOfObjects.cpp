#include <iostream>
using namespace std;

class mall
{
    int shopId;
    float shoprent;
    char shopLoaction;

public:
    void setData(int a, float b, char c)
    {
        shopId = a;
        shoprent = b;
        shopLoaction = c;
    }
    void printData(void)
    {
        cout << "The id of the shop in the mall is " << shopId << endl;
        cout << "The shop rent in the mall is rupees " << shoprent << endl;
        cout << "The block of the shop in the mall is " << shopLoaction << endl;
    }
};
int main()
{
    mall *shop = new mall[3]; //it created 3 objects 
    int p, i, j, size = 3;
    float q;
    char s;

    for (i = 0; i < size; i++)
    {
        cout << "Enter the value of shopId, shoprent, shopLocation respectively " << i << endl;
        cin >> p >> q >> s;
        (shop + i)->setData(p, q, s);
    }

    for (j = 0; j < size; j++)
    {
        cout<<"shop number:"<<j<<endl;
        (shop + j)->printData();
        cout << endl;
    }
    delete[] shop; 

    return 0;
}