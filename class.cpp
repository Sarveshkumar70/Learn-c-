#include <iostream>
#include <string.h>
using namespace std;

class binary
{
private:
    string s;
    void bin_chk();

public:
    void read(void);
    void one_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter your binary number :";
    cin >> s;
}

void binary ::bin_chk(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0'&& s.at(i) != '1')
        {
            cout << "binary format is incorrect";
            exit(0);
        }
    }
}

void binary ::one_compliment()
{
    bin_chk();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) ='0';
        }
    }
}

void binary ::display(void)
{
    cout<<"displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<< s.at(i);
    }
    cout<<endl;
}

int main()
{
    binary obj1;

    obj1.read();
    obj1.display();
    obj1.one_compliment();
    obj1.display();

    return 0;
}