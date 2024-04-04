#include <iostream>
using namespace std;
class BaseClass{
    public:
        int var_base=1;
        virtual void display(){ //because of this virtual variable the display function of the derived class runs.
            cout << "1.Displaying Base Class variable var_base: " << var_base << endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_derived=2;
        void display(){
            cout << "2.Displaying Base Class variable var_base: " << var_base << endl;
            cout << "2.Displaying Derived Class variable var_derived: " << var_derived << endl;
        }
};
int main(){
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->display(); //now the display() method of the derviedclass will run as the display() method of the Base class is virtual.
    return 0;
}