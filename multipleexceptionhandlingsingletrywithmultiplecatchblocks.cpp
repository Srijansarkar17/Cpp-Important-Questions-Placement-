// single try block having multiple catch block
#include <iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter the value of x: ";
    cin >> x;
    try{
        if(x==0){  //if x is 0, then the catch block with integer is executed.
            throw x;
        }
        else if(x==100){ //if x is 100, then the catch block with character is executed.
            throw ('E');
        }
        else if(x==1000){ //if x is 1000, then the catch block with double is executed.
            throw 5.5;
        }
        else{
            cout << "The value of x is: " << x << endl;
        }
    }
    catch(int x){
        cout << "Catch is an integer: " << x << endl;
    }
    catch(char x){
        cout << "Catch is a char: "<< x << endl;
    }
    catch(double x){
        cout << "Catch is a double: " << x << endl;
    }
    return 0;
}