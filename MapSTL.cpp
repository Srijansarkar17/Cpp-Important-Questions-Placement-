//Maps is used to store key,value pairs
#include <iostream>
#include <map>
#include <string>
using namespace std;
void display(map<string, int> &marks){
    map <string, int> :: iterator iter;
    for(iter=marks.begin(); iter!=marks.end();iter++){
    //marks.begin() points to the first element and marks.end() gives us a reference when the map ends
        cout<< (*iter).first<< " " << (*iter).second << endl;
        //(*iter).first refers to the key of the map and *iter.second refers to the value of the map
    }
}
int main(){
    map <string, int> marksMap;
    marksMap["Srijan"] = 98;
    marksMap["John"] = 59;
    marksMap["Rohan"] = 23;
    
    //Insert function of the Map:
    marksMap.insert({{"Ravi", 92}, {"Rohan", 78}});

    display(marksMap);

    //Size of the Map
    cout << "The size of the Map is: " << marksMap.size() << endl;

    //Empty function checks whether the map is empty
    cout << "The empty return value is: " << marksMap.empty() << endl;

    map <string, int> :: iterator iter1;
    iter1 = marksMap.begin();


    //Erase function used to erase the elements of the Map
    // marksMap.erase(iter1); //erases the element i.e the first element the iterator was pointing
    // display(marksMap);
    return 0;
}