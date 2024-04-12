#include <iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter the number: ";
    cin >> x;
    try{
        if(x==0){
            throw x;
        }
        else if(x==100){
            throw ('E');
        }
        else if(x==1000){
            throw (5.5);
        }
        else{
            cout << "The number is: " << x << endl;
        }
    }
    catch(...){ //these three dots inside the catch block means that it accepts all type of exceptions and returns only one statement.
        cout << "Some error happened" << endl;
    }
    return 0;
}