#include<iostream>
using namespace std;
int main(){
    int arr[]={2,5,1,-6,0,4};
    int n=sizeof(arr)/4;
    // selection sort
    for (int i=0; i<n-1; i++){  // no. of passes
          int mn=INT16_MAX;
          int minIndex=-1;  
        for (int j=i; j<n; j++){    // will traverse
            if(mn>arr[j]){
            mn=arr[j];
            minIndex=j;
        }
    }
    //swap of i-th and minIndex-th
    int temp=arr[i];
    arr[i]=arr[minIndex];
    arr[minIndex]=temp;    
    }
    // displaying the sorted array
    cout<<"Sorting of array is: "<<endl;
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}