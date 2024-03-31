#include <iostream>
using namespace std;
class Base1{
    protected:
        int base1int;
    public:
        void set_base1int(int a){
            base1int = a;
        }
};
class Base2{
    protected:
        int base2int;
    public:
        void set_base2int(int a){
            base2int = a;
        }
};
class Derived : public Base1, public Base2{
    public:
        void show(){
            cout << "The value of base 1 is: " << base1int << endl;
            cout << "The value of base 2 is: " << base2int << endl;
            cout << "The sum of base1 and base2 is: " << base1int + base2int << endl;
        }
};
/*
Since we inherited in public mode the inherited base class will look something like this:
Data members: 
    base1int --> protected
    base2int --> protected
Member functions:
    set_base1int --> public
    set_base2int --> public
*/
int main(){
    Derived a;
    a.set_base1int(20);
    a.set_base2int(30);
    a.show();
}