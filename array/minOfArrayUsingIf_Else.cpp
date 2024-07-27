#include<iostream>
using namespace std;
int main(){
    int arr[]{3,-44,2,3,3,-64,0};
    int n=sizeof(arr)/4;
    int mn=arr[3];
    for (int i=0; i<n; i++){
        if(mn>arr[i])
        mn=arr[i];
    }
    cout<<"Minimun of Array is: "<<mn;
    return 0;
}