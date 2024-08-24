#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number for size of your array:";
    cin>>n;
    int *arr=new int[n];
    // for taking inputs of array
    cout<<"Enter your elements of array: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    // it will give output of array
    cout<<"Your array is: ";
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for (int i=0; i<n-1; i++){  // no. of passes
        int min=INT16_MAX;
        int minDex=-1;
        for (int j=i; j<n; j++){  // for traverse
            // for check the condition
            if(arr[j]<min){
                min=arr[j];
                minDex=j;
            }
        }
        // for swappint, if condition will be true
        int temp=arr[i];
        arr[i]=arr[minDex];
        arr[minDex]=temp;
    }
    // for displaying the sorted array
    cout<<"Your sorted array is: ";
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}