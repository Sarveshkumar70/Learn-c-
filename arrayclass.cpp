
#include <iostream>
using namespace std;

class shop
{
private:
    int itemNo[100];
    int price[100];
    int counter;

public:
    void intailize(void) { counter = 0; }
    void setprice(void);
    void displayPrice(void);
};

void shop::setprice(void)
{
    cout << "Enter the item no. of product "<<counter+1<< endl;
    cin >> itemNo[counter];
    cout << "and it's price is" << endl;
    cin >> price[counter];
    counter++;
}

void shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The the item no. of product is " << itemNo[i] <<" and its price is " << price[i]<<endl;
    }
}

int main()
{
    shop rammudihatti;
    rammudihatti.intailize();
    rammudihatti.setprice();
    rammudihatti.setprice();
    rammudihatti.setprice();
    rammudihatti.displayPrice();
    return 0;
}
