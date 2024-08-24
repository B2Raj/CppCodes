#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter elements for the array: ";
    cin>>n;
    int arr[n];
    int a=sizeof(arr)/4;  // size of array
    // for taking input of array
    cout<<"Enter your array's elements: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    for (int i=0; i<a-1; i++){  // no. of passes
        for (int j=0; j<a-1; j++){  // will traverse
        // for check condition
            if(arr[j]>arr[j+1]){
                // for swap the condition
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }// it will display the sorted array
    cout<<"Sorted array is: ";
    for (int i=0; i<a; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}