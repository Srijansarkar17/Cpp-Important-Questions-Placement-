#include <iostream>
using namespace std;
class Base{
    protected:
        string Name;
        int RegNo;
    public:
        void getData(string a, int b){
            Name = a;
            RegNo = b;
        }
};
class Derived: public Base{  //using single inheritance
    protected:
        string subject_name, subject_code;
        int internal_marks, external_marks;
    public:
        void getData2(string c, string d, int e, int f){
            subject_name = c;
            subject_code = d;
            internal_marks = e;
            external_marks = f;
        }
        void display(){
            cout << "Student Name: " << Name << endl;
            cout << "Register No: " << RegNo << endl;
            cout << "Subject Name: " << subject_name << endl;
            cout << "Subject Code: " << subject_code << endl;
            cout << "Internal Marks: " << internal_marks << endl;
            cout << "External Marks: " << external_marks << endl;

        }
};
int main(){
    Derived srijan;
    srijan.getData("Srijan", 178);
    srijan.getData2("Maths" , "MO21A24", 60, 38);
    srijan.display();
}