#include <iostream>
using namespace std;
int LinearSearch(int array[], int n, int a){
    for(int i=0;i<n;i++){
        if(array[i]==a){
            return i;
        }
    }
    return -1;
}
int main(){
    int n,a;
    int array[n];
    cout << "Enter the size of the array: ";
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> array[i];
    }
    cout << "Enter the element you want to search :";
    cin >> a;
    cout <<  LinearSearch(array,n,a)<< endl;
    return 0;

}