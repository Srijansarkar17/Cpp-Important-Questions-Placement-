//because of the virtual base class the data member is only inherited once and we are saved from an ambiguity.
/*since student inherits both test and sports and test and sports both inherit result
so a problem could have happened that the data member of student could have been inherited in both test and sports
and when they inherited result the data member would have appeared twice which would have caused a problem.

So to save from this ambiguity we introduced virtual base class and the data member is only inherited once from student.
*/
#include <iostream>
using namespace std;
/*
Student ---> Test
Student ---> Sports
Test ---> Result
Sports ---> Result

*/
class Student{
    protected:
        int roll_no;
    public:
        void set_rollnumber(int a){
            roll_no = a;
        }
        void print_roll_number(){
            cout << "Your roll no is: " << roll_no << endl;
        }
};

class Test: virtual public Student{  //because of this virtual base class the data member of the student class is only inherited once.
    protected:
        float maths, physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }

        void print_marks(){
            cout << "Your result is here: "<<endl
                 << "Maths: " << maths<<endl
                 << "Physics: " << physics<<endl;
        }
};

class Sports: virtual public Student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }
        void print_score(){
            cout << "Your PT score is: " << score << endl;
        }
};

class Result: public Test, public Sports{
    private:
        float total;
    public:
        void display(){
            total = maths + physics + score;
            print_roll_number();
            print_marks();
            print_score();
            cout << "Your total result is: " << total << endl;
        }
};
int main(){
    Result srijan;
    srijan.set_rollnumber(178);
    srijan.set_marks(95.0, 92.8);
    srijan.set_score(9);
    srijan.display();
    return 0;
}