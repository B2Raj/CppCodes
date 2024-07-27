#include<iostream>
using namespace std;
int main(){
    int arr[]{1,3,25,3,2,3,5,-2};
    int n=sizeof(arr)/4;
    int a=INT16_MIN;
    for (int i=0; i<n; i++){
        if(a<arr[i]){
            a=arr[i];
        }
    }
      cout<<"Max Element is "<<a;
    return 0;
}