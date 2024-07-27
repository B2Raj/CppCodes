#include<iostream>
using namespace std;
int main(){
    int arr[]{3,2,4,2,3,44,4,6,3,2,55};
    int n=sizeof(arr)/4;
    int mx=arr[0];
    int index=-1;    // you can take any value
    for (int i=0; i<n; i++){
        if(mx<arr[i]){
            mx=arr[i];
            index=i;
        }
    }
    cout<<"Maximum is: "<<mx<<endl;
    cout<<"Index of Max value is: "<<index;
    return 0;
}