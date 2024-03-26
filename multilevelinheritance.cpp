//Multilevel Inheritance
//A--->B--->C

#include <iostream>
using namespace std;
class Student{         //grandfather class
    protected:
        int roll_number;
    public:
        void set_rollnumber(int);
        void get_rollnumber();
};
void Student:: set_rollnumber(int r){
    roll_number = r;
}
void Student:: get_rollnumber(){
    cout << "The roll number is: " <<roll_number << endl;
}

class Exam: public Student{   //father class
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float, float);
        void get_marks();
};

void Exam :: set_marks(float m1, float m2){
    maths = m1;
    physics = m2;
} 
void Exam :: get_marks(){
    cout << "The marks obtained in physics are: " << physics << endl;
    cout << "The marks obtained in maths are: " << maths << endl;
}

class Result: public Exam{    //child class
    float percentage;
    public:
        void display_results(){
            get_rollnumber();
            get_marks();
            cout << "Your percentage is: " << (maths+physics)/2 <<"%"<< endl;
        }
};

int main(){
    /*
    Notes:
        If we are inheriting B from A and C from B: [A--->B--->C]
        1. A is the base class for B and B is the base class for C
        2. A--->B--->C is called inheritance path.
    */
    Result srijan;
    srijan.set_rollnumber(420);
    srijan.set_marks(98.5, 95.4);
    srijan.display_results();
}