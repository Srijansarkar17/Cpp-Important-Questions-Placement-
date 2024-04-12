/*
In this program we divide two numbers and if the denominator is 0, we try to use exception handling
and use try and catch method to handle the error.
*/
#include <iostream>
using namespace std;
int main(){
    int numerator, denominator,result=0;
    cout << "Enter numerator and denominator: ";
    cin >> numerator>>denominator;
    try
    {
        if(denominator==0) //if the denominator is zero we throw the denominator in the next line
        {
        throw denominator; //control is transferred at this sentence to the catch block
        }
        result = numerator/denominator; //exception will be happening at this line of code where the division will be infinity if denominator is 0
    }
    catch(int ex) //we catch the integer i.e 0 from the throw keyword and the following statements are executed.
    {
        cout << "Exception: Divide by zero not allowed- " << ex;
    }
    cout  << "Division: " << result << endl;
    return 0;
}