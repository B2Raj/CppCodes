#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int *arr1=new int[n];
    int *arr2=new int[n];
    cout<<"Enter your array's elements: ";
    // for taking input of array
    for (int i=0; i<n; i++){
        cin>>arr1[i];
    }
    cout<<"Your array is: ";
        // for displaying the array
    for (int i=0; i<n; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    // will complete the condition
    for (int i=0; i<n; i++){
        arr2[i]=arr1[n-1-i];
    }
    cout<<"Your reverse copied array is: ";
    // for displaying the result
    for (int i=0; i<n; i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
}