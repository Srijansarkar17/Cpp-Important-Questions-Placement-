#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &v){
    for (int i = 0; i < v.size(); i++) //v.size returns the size of the vector
    {
        cout << v[i] << " "; 
    }
    cout <<  endl;
    
}
int main(){
    int element, size;
    //in an array the size cannot be modified but in a vector it can be modified.  
    vector<int> vec1;
    cout << "Enter the size of the vector: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector: ";
        cin >> element;
        vec1.push_back(element); //adds an element
    }
    vec1.pop_back(); //removes the last element
    display(vec1);
    vector<int> :: iterator iter = vec1.begin(); //we want to point the iterator to the first element of the vector 
    vec1.insert(iter, 566); //it inserts the number 566 at the position of the iterator i.e in this case its the first position
    vec1.insert(iter+1,5,566); //if we want to insert 5 copies of the number 566 at the second position we write like this
    display(vec1);



    vector<char> vec2(4); //4 element character vector
    vec2.push_back('5');
    display(vec2);
    vector<char> vec3(vec2); //4 element character vector from vec2
    display(vec3);
    vector<int> vec4(6, 3); // 6 element vector of 3s
    display(vec4);
    cout << vec4.size() << endl; //returns the size of the vector
 
    
    
    return 0;
}