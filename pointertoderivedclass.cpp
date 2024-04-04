#include <iostream>
using namespace std;
class BaseClass{
    public:
        int var_base;
        void display(){
            cout << "Displaying Base Class variable var_base: " << var_base << endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_derived;
        void display(){
            cout << "Displaying Base Class variable var_base: " << var_base << endl;
            cout << "Displaying Derived Class variable var_derived: " << var_derived << endl;
        }
};
int main(){ 
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; //the pointer of base class can point towards the derived class in C++
    /*even if we point the pointer of the base class towards the derived class,
    but when we call the display function of the base class using base_class_pointer,
    it calls the display function of the base class and not the derived class.
    This is called LATE BINDING.
    */
    base_class_pointer->var_base = 34;
    base_class_pointer->display();
    // base_class_pointer->var_derived = 134;  //will throw an error because we cannot access the members of the derived class using the base class pointer

    
    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 9800; //we can access the data members of the base class using the derived class pointer.
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();
    return 0;
}