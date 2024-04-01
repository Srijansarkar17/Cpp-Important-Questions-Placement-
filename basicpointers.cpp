//pointers are variables that store the address of other variables
#include <iostream>
using namespace std;
int main(){
    int a=10;
    int *aptr;
    aptr = &a; //stores the address of a
    cout << aptr << endl; //prints the address
    cout << *aptr << endl; //prints the value
    *aptr = 20; //we can update the value of a using pointers
    cout <<"The new value of a is: "<< a << endl;
    aptr++; //this will increment the address of a by 4 values because int is of 4bytes.
    cout << "The address after incrementing is: "<<aptr << endl;


    //similarly if we use pointers for characters
    char ch='a';
    char *cptr = &ch;
    cout << "The address of character ch is: " << cptr << endl;
    cptr++;
    cout << "The incremented value of ch is: " << cptr << endl;
    return 0;
}