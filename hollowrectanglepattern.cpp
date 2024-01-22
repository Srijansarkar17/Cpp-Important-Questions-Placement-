******
*    *
*    *
*    *
******
#include <iostream>
using namespace std;
int main(){
    int rows,col;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> col;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=col;j++){
            if(i==1 || i==rows){     //in the first and last rows stars will be printed
                cout << "*";
            }else if(i>1 || i<rows){    // in the middle rows the first and the last column is where stars are printed
                if(j==1 || j==col){
                    cout << "*";
                }else{
                    cout << " ";       // all the middle part is printed with spaces
                }
            }
        }
        cout << endl;
    }
    return 0;
}