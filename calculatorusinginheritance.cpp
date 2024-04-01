#include <iostream>
#include <cmath>
using namespace std;
class SimpleCalculator{
    protected:
        int a,b;
    public:
        void getDataSimple(){
            cout << "Enter the value of a: ";
            cin >> a;
            cout << "Enter the value of b: ";
            cin >> b;
        }
        void processSimple(){
            cout << "Addition: " << a+b << endl;
            cout << "Multiplication: " << a*b << endl;
            cout << "Substraction: " << a-b << endl;
            cout << "Division: " << a/b << endl;
        }
};

class ScientificCalculator{
    protected:
        int a, b;
    public:
        void getDataScientific(){
            cout << "Enter the value of a: ";
            cin >> a;
            cout << "Enter the value of b: ";
            cin >> b;
        }
        void processScientific(){
            cout << "Cos(a) " << cos(a) << endl;
            cout << "Cos(b) " << cos(b) << endl;
            cout << "Sin(a) " << sin(a) << endl;
            cout << "Sin(b) " << sin(b) << endl;
        }
};

class HybridCalculator: public SimpleCalculator, public ScientificCalculator{ //using multiple inheritance

};
int main(){
    HybridCalculator calc;
    calc.getDataScientific();
    calc.processScientific();

    calc.getDataSimple();
    calc.processSimple();
}