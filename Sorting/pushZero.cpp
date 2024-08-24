#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int arr[n];
    int x=sizeof(arr)/4;    // size of array
    for (int i=0; i<x; i++){    // for input of array
        cin>>arr[i];
    }
    for (int i=0; i<x-1; i++){  // no. of passes
        for (int j=0; j<x-1; j++){  // will traverse
            // for check condition
            if(arr[j]==0){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    // for dilplaying the sorted output
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}