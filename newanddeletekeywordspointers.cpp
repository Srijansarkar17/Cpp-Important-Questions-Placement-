#include <iostream>
using namespace std;
int main(){
    int a=4;
    int *ptr = &a;
    cout << "The value of a is: " << *(ptr) << endl;

    //new operator
    int *p = new int(40);  // we dynamically allocate a value
    cout << "The value at address p is: " << *(p) << endl;

    //we need to allocate memory for storing new integers

    int* arr = new int[3]; // we dynamically allocated memory for storing 3 integers using an array.
    arr[0] = 10;
    *(arr+1) = 20;
    arr[2] = 30;
    //delete operator
    //delete[] arr; //it frees the dynamically allocated array so it gives random values.
    cout << "The value of arr[0] is: " << arr[0] << endl;
    cout << "The value of arr[1] is: " << arr[1] << endl;
    cout << "The value of arr[2] is: " << arr[2] << endl;
    
    return 0;
}