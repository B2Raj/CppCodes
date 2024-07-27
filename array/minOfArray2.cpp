#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"Enter size of arrar: ";
    cin>>n;
    int *arr=new int[n];
    // for taking input of array
    cout<<"Enter the elements of array: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int mn=arr[0];
    for (int i=0; i<n; i++){
        if(arr[i]<mn){
            mn=arr[i];
        }
    }
    cout<<"Min of array is: "<<mn;
    return 0;
}