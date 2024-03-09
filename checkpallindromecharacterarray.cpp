#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    char arr[n+1]; //we always one more space because we also need to include '\0' character
    cin >> arr;
    int i;
    bool flag = true;
    for(i=0; i<n; i++){
        if(arr[i]!=arr[n-1-i]){ //arr[n-1-i] is always used when we count backwards
            flag = false;
            break;
        }else{
            flag=true;
        }
    }
    if(flag){
        cout << "Pallindrome" << endl;
    }else{
        cout << "Not a pallindrome" << endl;
    }

}