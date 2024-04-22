//if we want faster insertion and deletion then we use list
//if we want faster access then we use array
#include <iostream>
#include <list>
using namespace std;
void display(list<int> &lst){
    list<int> :: iterator it;
    for (it=lst.begin();it!=lst.end();it++) //lst.end() gives reference when the list ends. when the list ends the iterator will become equal to lst.end()
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main(){
    list<int> list1;  //List of 0 Length
    //Adding elements to list1 using pushback function:
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    list<int> :: iterator iter1;
    iter1 = list1.begin(); //iterator points to the first element of list 1
    display(list1);
    //Removing elements from the list:
    // list1.pop_back(); //deletes an element from the last
    // list1.pop_front(); //deletes an element from the front of the list
    // list1.remove(9); //removes the given element from the list i.e in this case removes 9 from the list

    //Sorting the list:
    // list1.sort();
    // display(list1);

    //Reversing the list:
    // list1.reverse();
    // cout << "Reversed list1: ";
    // display(list1);

    //Inserting the element:
    // iter1++;
    // list1.insert(iter1, 88); //element 88 gets added to the second position of the list, where the iterator points
    // cout << "List1 after inserting an element: ";
    // display(list1);


    //Creating iterator and accessing elements using iterator:
    // list<int> :: iterator iter;
    // iter = list1.begin(); //iterator points to the first element of list 1
    // cout << *iter << endl; //tells the value where the iterator points
    // iter++; //iterator moves to the second position
    // cout << *iter << endl;


    list<int> list2(3); // Empty List of Size 3
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 27;
    iter++;
    *iter = 33;
    iter++;
    cout << "List2: ";
    display(list2);
    list1.merge(list2); //merging the elements of both list1 and list2 
    cout << "List 1 after merging: ";
    display(list1);
    
    return 0;
}