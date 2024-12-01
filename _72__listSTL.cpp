#include <iostream>
#include <list>
using namespace std;

void display(list<int> &list2)
{
    list<int>::iterator it;
    for (it = list2.begin(); it != list2.end(); it++)
    {
        cout << *it << " ";
    }
    cout<<endl;
}
int main()
{
    list<int> list1; // list of 0 length
    list1.push_back(47);
    list1.push_back(85);
    list1.push_back(1);
    list1.push_back(15);
    list1.push_back(35);

    list<int>::iterator iter;
    iter = list1.begin();

    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // or
    display(list1);

    //sorting the list
    // list1.sort();
    // display(list1);

    //  REMOVING ELEMENTS FROM THE LIST
    // list1.pop_back();// pops element from back of list
    // list1.pop_front();// pops element from front of list
  //  list1.remove(15);// remove that element the no. of times it repeats it self 
  //  display(list1);

    list<int> list3(4);// empty list of size 4
    list<int> :: iterator ite;
    ite=list3.begin();
    *ite=45;
    ite++;
    *ite=95;
    ite++;
    *ite=12;
    ite++;
    *ite=15;
    ite++;
    display(list3);

    // list1.sort();
    // list3.sort();

    // list1.merge(list3);
    // cout<<"After merging list1 with list3 ";
    // display(list1);

    //reversing the list
    list1.reverse();
    display(list1);



    return 0;
}