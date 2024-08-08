#include<iostream>
using namespace std;
int main(){
    int a;
   cout<<"Enter total no. of elements of array: ";
    cin>>a;
    int arr[a];
    cout<<"Enter elements of array: ";
    int n=sizeof(arr)/4;
    int product=1;
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The product of elements of array is: ";
    for (int i=0; i<n; i++){
        product*=arr[i];
    }
    cout<<product;
 return 0;
}