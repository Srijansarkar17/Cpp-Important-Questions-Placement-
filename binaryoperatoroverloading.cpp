#include <iostream>
using namespace std;
class Complex{
    int real, imag;
    public:
    Complex(){
        real = 0;
        imag = 0;
    }
    Complex(int x, int y){
        real = x;
        imag = y;
    }
    void print(){
        cout << real << "+"<< imag <<"i"<< endl;
    }

    Complex operator +(Complex c){
        Complex temp;
        temp.real = real + c.real; // here real means  real part of c1 and c.real means real part of c2
        temp.imag = imag + c.imag;
        return temp;
    }
};
int main(){
    Complex c1(3,4);
    c1.print();
    Complex c2(5,6);
    c2.print();

    Complex c3;
    c3 = c1+c2; // this line is accessed by the compiler as c3 = c1.add(c2) 
    c3.print();
}