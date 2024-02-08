//did on my own:)
//the max till of  1 0 5 4 6 8 will be 1 1 5 5 6 8
#include <iostream>
using namespace std;
int main(){
    int n,temp;
    cout << "Enter the size: ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
               arr[j]=arr[i];
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}