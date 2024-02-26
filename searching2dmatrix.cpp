#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    bool flag = false;
    int a;
    cout << "What element do you want: ";
    cin >> a;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==a){
                cout << i << j << endl;
                flag = true;
            }
        }
    }

    if(flag){
        cout << "Element is found" << endl;
    }else{
        cout << "Element not found" << endl;
    }
    return 0;
    }