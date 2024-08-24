#include<iostream>
using namespace std;
int main(){
    int arr[]={3,2,5,2,4,5};
    int n=sizeof(arr)/4;
    for (int i=0; i<n-1; i++){  // no. of passes
        int mn=INT16_MAX;
        int mnIndex=-1;
        for (int j=i; j<n; j++){    //will traverse
        // for check condition
            if(mn>arr[j]){
               mn=arr[j];
               mnIndex=j;
            }
        }
        // swaping of first elements with min element that is i-th and mnIndex-th.
        int temp=arr[i];
        arr[i]=arr[mnIndex];
        arr[mnIndex]=temp;
    }   
    // for displaying the sorted array
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}