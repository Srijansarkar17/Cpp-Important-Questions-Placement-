// ambiguity takes place when a function with same name is there in two or more classes and all of them are inherited in a derived class
// to resolve that we use the ambiguity resolution method where we write this(Class_name::function_name) in the function of the derived class and method the class whose function we want to call.
#include <iostream>
using namespace std;
class Base1{
    public:
        void greet(){
            cout << "How are you?" << endl;

        }
};

class Base2{
    public:
        void greet(){
            cout << "Kaise ho?" << endl;
            
        }
};

class Derived: public Base1, public Base2{
    int a;
    public:
        void greet(){
            //this means that whenever we call the greet fn of the derived class the greet function of base class is called.
            Base1::greet();
        }
};
// classes for ambiguity 2
class B{
    public:
        void say(){
            cout << "Hello World" << endl;
        }
};

class D: public B{
    int a;
    // D's new say() fn will override base class's say() fn.
    public:
        void say(){
            cout << "Hello my beautiful people" << endl;
        }

};
int main(){
    cout << "Ambiguity 1" << endl;
    //Ambiguity 1
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();

    Derived derivedobj;
    derivedobj.greet(); //here the greet() fn of the Base1 class will get executed because we have resolved the ambiguity in the derived class.


    //Ambiguity 2
    cout << "------------------" << endl;
    cout << "Ambiguity 2" << endl;
    B b;
    b.say();

    D d;
    d.say(); //in this case the say() fn in the derived class will get executed.

    return 0;
}