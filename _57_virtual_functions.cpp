#include <iostream>
using namespace std;

class cwh
{
protected:
    string title;
    float rating;

public:
    cwh(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()
    {
        cout<<"hahahahaah it runs base class display function "<<endl;
    }
};

class cwhvideo : public cwh
{
    float videolength;

public:
    cwhvideo(string s, float r, float vl) : cwh(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "The title of the video is " << title << endl;
        cout << "The rating of the video is " << rating << endl;
        cout << "The videolength  is " << videolength <<" minutes "<< endl;
    } 
    //NOTE
    // since it does not found display function in class cwhvideo it automatically runs display function of base class  
};

class cwhText : public cwh
{
    int words;

public:
    cwhText(string s, float r, int w) : cwh(s, r)
    {
        words = w;
    }
    void display()
    {
        cout << "The title of the \" blog \"is " << title << endl;
        cout << "The rating of the blog is  " << rating << endl;
        cout << "Total words in blog  is " << words<< endl;
    }
};

int main()
{
    string st;
    float videolength,rating;
    int words;

    //for cwdvideo
    st="The psychology behind everything ";
    videolength=12.5;
    rating=4.8;
    cwhvideo obj1(st,rating,videolength);

    //for cwdText
    st="How to go back in time  ";
    rating=1.8;
    words=300;
    cwhText obj2(st,rating,words);

    cwh *obj3[2];
    obj3[0]=&obj1;
    obj3[1]=&obj2;

    obj3[0]->display();
    obj3[1]->display();

    return 0;
}