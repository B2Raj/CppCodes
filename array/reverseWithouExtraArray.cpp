#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter array's elements: ";
    // for taking input of array
    for (int i=0; i<n; i++){
        cin>>arr[i];
    } 
    int i=0, j=n-1;
    while (i<j){
        int temp=arr[i]; 
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    cout<<"Reverse of array is: ";
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}