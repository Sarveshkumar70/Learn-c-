#include <iostream>
using namespace std;

int main()
{
    enum year {    Jan=20,
    Feb,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec};

    // year mll= Dec;
    // cout<<mll<<endl;


for (int i = Jan; i <= Dec ; i++)
{
    cout<<i<<endl;
}

    return 0;
}