#include <iostream>
#include <cstring>
using namespace std;
//CWH stands for Code with Harry
class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }
        virtual void display(){}
};

class CWHVideo: public CWH{
    float videoLength;
    public:
        CWHVideo(string s, float r, float vl): CWH(s, r){
            videoLength = vl;
        }
        void display(){
            cout << "This is an amazing video with title: " << title << endl;
            cout << "This video has rating " << rating <<" out of 5 stars" <<endl;
            cout << "The length of this video is " << videoLength <<" minutes" <<endl;
        }
};
class CWHText: public CWH{
    int words;
    public:
        CWHText(string s, float r, int wc): CWH(s, r){
            words = wc;
        }
        void display(){
            cout << "This is an amazing text tutorial " << title << endl;
            cout << "Ratings of this text tutorial " << rating <<"out of 5 stars" <<endl;
            cout << "The word count of this text tutorial is " << words <<endl;
        }
};


int main(){
    string title;
    float rating, vlen;
    int words;

    //for Code with Harry video
    title = "Django Tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);
    //djVideo.display();

    //for Code with Harry text
    title = "Django Tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, vlen);
    //djText.display();

    CWH *tuts[2];   //two pointers are created
    tuts[0] = &djVideo; 
    tuts[1] = &djText;

    tuts[0]->display();  //Since the function of CWH is virtual the function djVideo is called.
    tuts[1]->display();  //Since the function of CWH is virtual the function djText is called.
    return 0;
}
/*
Rules for virtual functions:
1. They cannot be static.
2. They are accessed by object pointers.
3. Virtual functions can be a friend of another class
4. A virtual function in base class might not be used
5. If a virtual function is defined in a base class, there is no necessity of redifining it in the derived class.
*/