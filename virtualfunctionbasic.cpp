#include <iostream>
using namespace std;
class Base{
    public:
        void show(){
            cout << "Base class show function called!" << endl;
        }
        virtual void print(){
            cout << "Base class Print function called!" << endl;
        }
};

class Derived: public Base{
    public:
        void show(){
            cout << "Derived class show function called!" << endl;
        }
        void print(){
            cout << "Derived class Print function called!" << endl;
        }
};
int main(){
    Base *baseptr;
    Derived derivedobj;
    baseptr = &derivedobj;

    //runtime polymorphism
    baseptr->print(); //derived class fn called because the base class has virtual function print
    baseptr->show(); //base class show fn called
}