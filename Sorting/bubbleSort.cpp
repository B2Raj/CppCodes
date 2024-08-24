#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,4,2,5,8,6};
    int n=sizeof(arr)/4;
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-1; j++){
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