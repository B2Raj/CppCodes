#include<iostream>
using namespace std;
int main(){
    // n is for no. of elements in array
    int n; 
    cout<<"Enter the no. for elements for array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    int arr[n];
    int a=sizeof(arr)/4;
    // for input of elements in array
    for (int i=0; i<a; i++){
        cin>>arr[i];
    }
    // Bubble sorting
    for (int i=0; i<a-1; i++){  // no. of passes
        for (int j=0; j<a-1; j++){  //  will traverse
        // condition for swap
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    // for display the sorted array
    cout<<"Sorting of array is: ";
    for (int i=0; i<a; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}