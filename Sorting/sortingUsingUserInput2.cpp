#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number for size of Array: ";
    cin>>n;
    int arr[n];
    int b=sizeof(arr)/4;
    for (int a=0; a<n; a++){
        cin>>arr[a];
    }
    for (int i=0; i<b-1; i++){  // no. of passes
        int mn=INT16_MAX;
        int mnIndex=-1;
        for (int j=i; j<b; i++){    // will traverse
        // for check condition
            if(mn>arr[j]){
                mn=arr[j];
                mnIndex=j;
            }
        }
        // for make swaping of them
        int temp=arr[i];
        arr[i]=arr[mnIndex];
        arr[mnIndex]=temp;
    }
    // for displaying the sorte array
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}