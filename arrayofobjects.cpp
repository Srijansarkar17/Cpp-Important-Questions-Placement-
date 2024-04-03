#include <iostream>
using namespace std;
class ShopItem{
    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(){
            cout << "Code of this item is: " << id <<endl;
            cout << "Price of this item is: " << price << endl;
        }
};
        // Objects 1   2   3   As the pointer (ptr) points and increments one by one in the first for loop  
        //         ^   ^       for setting the Data, the seoond pointer (ptrTemp) is used for getting the data
        //         |   |
        //         |   |
        //         |  ptr
        //         |
        //       ptrTemp
int main(){
    int size = 3;
    ShopItem *ptr = new ShopItem[size]; //this is how array of objects is created with 3 objects
    ShopItem *ptrTemp = ptr;
    int p;  //stores id of the item
    float q; //stores price of the item
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Id and price of item "<< i+1 << endl;
        cin>>p>>q;
        ptr->setData(p, q);
        ptr++;
    }
    cout << "---------------------------" << endl;
    cout << "Detailed Format" << endl;
    for (int i = 0; i < size; i++)
    {   
        cout << "Item Number: " <<i+1<< endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    return 0;
}