#include <iostream>
using namespace std;

class base1
{
public:
    void greetings()
    {
        cout << "How are you ?" << endl;
    }
};

class base2
{
public:
    void greetings()
    {
        cout << "arrey kaise ho babumoshiye ?" << endl;
    }
};

class derived12 : public base1, public base2
{
public:
    // we have written this fn. that will solve the ambiguity
    // but if we didn't write this, then it will create ambiguity.
    void greetings()
    {
        base2::greetings(); // fn. of base2 will be called
    }
};

// another thing that seem like ambiguity
class b
{
public:
    void say()
    {
        cout << "hello chacha " << endl;
    }
};

class d : public b
{
public:
    // void say()
    // {
    //     cout << "yo yo broooooo" << endl;
    // }
};

int main()
{
    derived12 obj1;
    obj1.greetings();

    b obj2;
    obj2.say();
    d obj3; // it will call fn. say() of b automatically because due to inheritance it has also inherited  the fun. say() od class b (note that we have commented the fun. say() of d thats why it is calling fn. of b),thus resolving problem that seem like ambiguity (but actually it is not ambiguity)
    obj3.say();

    return 0;
}