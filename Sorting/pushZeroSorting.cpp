#include<iostream>
using namespace std;
int main(){
    int arr[]={3,2,3,0,8,7,0,0,6,0};
    int n=sizeof(arr)/4;
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-1; j++){
            if(arr[j]==0){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for (int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
    return 0;
}