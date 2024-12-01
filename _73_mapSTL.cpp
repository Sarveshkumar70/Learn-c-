#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    // map is an associative array
    map<string, int> marksmap;
    marksmap["paige"] = 45;
    marksmap["xavier"] = 75;
    marksmap["lita"] = 65;
    marksmap["jerry"] = 5;
    marksmap["amy"] = 23;
    marksmap.insert({"lol", 4});
    map<string, int>::iterator iter;

    // while printing data it gets automatically sort
    // maybe it is because of  map
    for (iter = marksmap.begin(); iter != marksmap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }

    cout << "The size of the map is " << marksmap.size() << endl;
    cout << "The max-size of the map is " << marksmap.max_size() << endl;
    cout << "return value if map is empty " << marksmap.empty() << endl;

    return 0;
}