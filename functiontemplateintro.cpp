#include <iostream>
using namespace std;
template <typename T>
T add(T x, T y){
    return (x+y);
}
int main(){
    cout << "Addition of two integers 3 and 4 is: " << add<int>(3,4) << endl;
    cout << "Addition of two float numbers 3.2 and 4.4 is: " << add<float>(3.2,4.4) << endl;
    return 0;
}