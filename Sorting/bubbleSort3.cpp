#include<iostream>
using namespace std;
int main(){
int arr[]={3,5,2,4,0,6,3,89};
int n=sizeof(arr)/4;
    // bubble sort
for (int i=0; i<n-1; i++){  // no. of passes
    for (int j=0; j<n-1; j++){  // for traversing the array
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
}
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}