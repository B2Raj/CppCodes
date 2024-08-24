#include<iostream>
using namespace std;
int main(){
    int arr[]={12,3,4,23,25,32};
    int n=sizeof(arr)/4;
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp; 
            }  
        }
    }
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
        }
        return 0;
}