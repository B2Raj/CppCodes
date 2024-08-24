#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number for the size of array: ";
    cin>>n;
    int arr[n];
    // it will give the size if array
    int x=sizeof(arr)/4;
    // for taking input of array
    for (int i=0; i<x; i++){
        cin>>arr[i];
    }
    for (int i=0; i<x-1; i++){  // no. of passes
        for (int j=0; j<x-1; j++){  //for traversing
        // for check condition
            if(arr[j]<arr[j+1]){
                // for true, there will be swapping
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    // for displaying the sorted array
    cout<<"Sorted array will be: ";
    for (int i=0; i<x; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}