#include<iostream>
using namespace std;
int main(){
    int arr[]={3,2,45,2,5,442};
    int n=sizeof(arr)/4;
    int mx=arr[0];
    for (int i=0; i<n; i++){
        mx=max(mx,arr[i]);
    }
    cout<<"Maximum of array is: "<<mx;
    return 0;
}