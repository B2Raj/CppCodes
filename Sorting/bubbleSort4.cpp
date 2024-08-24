#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no. for size of array: ";
    cin>>n;
    int arr[n];
    int x=sizeof(arr)/4;    // gives the size of array
    cout<<"Enter the elements of array: "<<endl;
    // for taking input of array
    for (int i=0; i<x; i++){
        cin>>arr[i];
    }
        // for no. of passes
    for (int i=0; i<x-1; i++){
            // will traverse
        for (int j=0; j<x-1; j++){
            // will check condition
            if(arr[j]>arr[j+1]){
                // for swapping the condition
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    // for displaying the sorted array
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}