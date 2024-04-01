//this is run time polymorphism as it happens at run time. 
#include <iostream>
using namespace std;
class Animal{
    public:
        virtual void eat(){
            cout << "I am eating generic food" << endl;
        }
};
class Cat: public Animal{
    public:
        void eat(){
            cout << "I am eating cat food" << endl;
        }
};
class Dog: public Animal{
    public:
        void eat(){
            cout << "I am eating dog food" << endl;
        }
};
void function1(Animal *xyz){
    xyz->eat();  //using only function i can point towards different functions of different classes
}
int main(){
    Animal *ptr;
    Cat catObj;
    Dog dogObj;

    ptr = &catObj;
    function1(ptr); //since in animal the function is virtual, it executes the function of cat class as its pointer is towards the cat object

    ptr = &dogObj;
    function1(ptr); //since in animal the function is virtual, it executes the function of dog class as its pointer is towards the dog object
}