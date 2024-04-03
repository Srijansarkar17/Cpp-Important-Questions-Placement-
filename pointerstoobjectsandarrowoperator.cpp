#include <iostream>
using namespace std;
class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout << "The real part is: " << real << endl;
            cout << "The imaginary part is: " << imaginary << endl;
        }
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
};
int main(){
    // Complex c1;
    // Complex *ptr = &c1; //ptr is a pointer pointing towards the object c1
    Complex *ptr = new Complex; //another way of making an object using new operator
    //(*ptr).setData(1,54); is exactly same as:
    ptr->setData(1,54); //using arrow operator

    //(*ptr).getData(); is as good as:
    ptr->getData();


    //Array of objects
    Complex *ptr1 = new Complex[4]; //here we create an array of 4 objects using this method and we can access this memory space by incrementing pointers
    ptr1->setData(1, 4);
    ptr1->getData();
    return 0;
}