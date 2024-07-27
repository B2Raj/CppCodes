#include<iostream>
using namespace std;
int main(){
    int arr[]{4,2,4,4,5,2,2,43,22,4};
    int n=sizeof(arr)/4;
    int mx=arr[0];
    for (int i=0; i<n; i++){
        if(mx<arr[i]){
            mx=arr[i];
        }
    }
    cout<<"Maximum of array is: "<<mx;
    return 0;
}