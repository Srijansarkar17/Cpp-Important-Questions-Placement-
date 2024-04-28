#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int> d = {1,2,3,4,5};
    cout << "size: " << d.size() << endl;

    //Acessing elements in random access:
    cout << "Third Element: " << d[2] << endl;

    cout << "First: " << d.front() << " Back: " << d.back() << endl; //returns the first and the last element

    //iterating from front to the beginning:
    deque<int>:: iterator it = d.begin();
    for(it=d.begin(); it!=d.end(); it++){
        cout << *it << "\t";
    }
    cout << endl;

    //iterating from the end to the beginning

    for(deque<int>:: reverse_iterator it = d.rbegin(); it != d.rend() ; ++it){
        cout << *it << "\t";
    }
    cout << endl;

    //adding elements using push_back and push_front function:
    d.push_back(100);
    d.push_back(200);

    d.push_front(-100);
    d.push_front(-200);

    for(it=d.begin(); it!=d.end(); it++){
        cout << *it << "\t";
    }
    cout << endl;

    //popping elements using the pop_back and pop_front function:
    d.pop_back();  //removes element from back
    d.pop_front(); //removes element from the front 

    for(it=d.begin(); it!=d.end(); it++){
        cout << *it << "\t";
    }
    cout << endl;
}