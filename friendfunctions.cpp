//a friend function is a type of function in which it is allowed to access the private members of the class
#include <iostream>
using namespace std;
class Complex{
    int a, b;
    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }
        //the line below means that sumComplex is allowed to do anything with the private members of the Complex class
        friend Complex sumComplex(Complex o1, Complex o2);
        void printNumber(){
            cout <<"Your number is: "<< a << "+" << b << "i"<< endl;
        }
};
Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a) , (o1.b + o2.b));
    return o3;
}
int main(){
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}
/* Properties of friend functions:
1. Not in the scope of the class
2. Since it is not in the scope of the class it cannot be called from the object of that class.
3. Can be invoked without the help of the object.
4. Contains objects as arguments.
5. It cannot access member names directly by their names and needs objectname.membername to access any member.
*/