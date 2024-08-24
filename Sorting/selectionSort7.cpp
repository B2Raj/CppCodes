#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int *arr=new int[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    for (int i=0; i<n-1; i++){
        int mn=INT16_MAX;
        int minDex=-1;
        for (int j=i; j<n; j++){
            if(arr[j]<mn){
                mn=arr[j];
                minDex=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minDex];
        arr[minDex]=temp;
    }
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}