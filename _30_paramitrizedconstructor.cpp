#include <iostream>
using namespace std;

class complex
{
   int a, b;

public:
   complex(int, int); // paramitized constructor
   void printcomp(void)
   {
      cout << "Your complex number is " << a << " + " << b << "i" << endl;
   }
};
complex::complex(int x, int y) // constructor definition
{
   a = x;
   b = y;
}

int main()
{
   // implicit call
   complex c(4, 8);
   c.printcomp();

   // explicit call
   complex m = complex(9, 2);
   m.printcomp();

   return 0;
}