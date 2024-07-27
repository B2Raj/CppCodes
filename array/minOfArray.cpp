#include<iostream>
using namespace std;
int main(){
    int arr[]={23,4,223,4,212,3,-6};
    int n=sizeof(arr)/4;
    int a=INT16_MAX;
    for (int i=0; i<n; i++){
        if(a>arr[i]){
        a=arr[i];
        }
    }
    cout<<a;
    return 0;
}