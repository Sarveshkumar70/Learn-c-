#include <iostream>
using namespace std;

// namespace one
// {
//     int i;
// }
// namespace two
// {
//     int j;
// }
// namespace two
// {
//     int k;
// }


// nested namespace
namespace one
{
    int i;
    namespace two
    {
        int j;
    }
}

int main()
{
    // one::i=10;
    // two::j=20;
    // cout<<one::i<<" and "<<two::j<<endl;


    // two::j=22;
    // two::k=23;
    // using namespace two;
    // cout<<j<<" "<<k;

    one::two::j=75;
   
   return 0;
}