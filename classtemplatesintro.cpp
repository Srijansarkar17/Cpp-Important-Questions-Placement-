#include <iostream>
using namespace std;

template <typename T, typename U>
class Weight{
    private:
        T kg;
        U grams;
    public:
        void setData(T x, U y){
            kg = x;
            grams = y;
        }
        T getKgData(){
            return kg;

        }
        U getgramsData(){
            return grams;

        }
};
int main(){
    Weight <int, double>obj1;
    obj1.setData(5, 4.56);
    cout << "Value is: " << obj1.getKgData() <<" kg and " << obj1.getgramsData() <<" grams"<< endl;

    Weight <double, double>obj2;
    obj2.setData(5.4342, 2.45);
    cout << "Value is: " << obj2.getKgData() <<" kg and " << obj2.getgramsData() <<" grams"<< endl;
}