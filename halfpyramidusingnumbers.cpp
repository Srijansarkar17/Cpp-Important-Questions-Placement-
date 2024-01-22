1
22
333
4444
55555
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of digits: ";
    cin >> n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i ; j++){
            cout << i;
        }
        cout << endl;
    }
    return 0;
}