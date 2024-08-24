#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter your array elements: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    for (int i=0; i<n-1; i++){    // no of passes
        int minimum=INT16_MAX;
        int minIndex=-1;
        for (int j=i; j<n; j++){    // for traversing
            if(arr[j]<minimum){
                minimum=arr[j];
                minIndex=j;
            }
        }
        // for swapping the condition
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }
    // for printing the sorted array
    cout<<"Your sorted array is: ";
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}