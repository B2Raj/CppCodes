#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int *arr=new int[n];
    // for taking input of array
    cout<<"Enter elements of your array: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int product=1;
    for (int i=0; i<n; i++){
        product*=arr[i];
    }
    cout<<"Product of array's elements is: ";
    cout<<product;
    return 0;
}