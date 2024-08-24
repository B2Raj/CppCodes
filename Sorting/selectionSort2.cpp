#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,6,-4,2};
    int n=sizeof(arr)/4;    // size of array
    for (int i=0; i<n-1; i++){  // no. of passes
        int minimum=INT16_MAX;
        int minIndex=-1;
        for (int j=i; j<n; j++){    // will traverse
            if(minimum>arr[j]){
               minimum=arr[j];
               minIndex=j; 
            }
        }
        // now, swaping of i-th and minIndex-th
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }
    cout<<"Sorted array is: ";
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}