#include <iostream>
using namespace std;
/*
Case 1:
class B: public A{
    //Order of execution of constructor --> First A() then B()
    //because base class constructor is called before derived class constructor
};

Case 2:
Class A: public B, public C{
    //Order of execution of constructor --> First B(), then C(), then A()
    // because we wrote B before C so B() is executed first
}

Case 3:
Class A: public B, virtual public C{
    //Order of execution of constructor --> First C(), then B(), then A()
    //because virtual class is given preference first then non virtual class is executed
}
*/

class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout << "Base1 Class Constructor called!" << endl;
        }
        void printDataBase1(){
            cout << "The value of data1 is: " << data1 << endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout << "Base2 Class Constructor called!" << endl;
        }
        void printDataBase2(){
            cout << "The value of data2 is: " << data2 << endl;
        }
};
//the order in which the constructor should be called depends upon the below line.
//since the order of Base1 is written first, then Base2 is written so first the constructor of Base1() is called.
class Derived: public Base1, public Base2{
    int derived1, derived2;
    public:
    //in the line below we pass the arguments of both the base classes in the derived class
        Derived(int a, int b, int c, int d): Base1(a), Base2(b){
            derived1 = c;                           
            derived2 = d;
            cout << "Derived Class Constructor called!" << endl;
        }
        void printDataDerived(){
            cout << "The value of derived1 is: " << derived1 << endl;
            cout << "The value of derived2 is: " << derived2 << endl;
        }

};
int main(){
    Derived srijan(1,2,3,4); //First Base1() constructor called, then Base2() constructor called then Derived() constructor called
    srijan.printDataBase1();
    srijan.printDataBase2();
    srijan.printDataDerived();
}