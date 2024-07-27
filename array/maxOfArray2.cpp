#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter elements of array: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int mx=arr[0];
    for (int i=0; i<n; i++){
        if(arr[i]>mx){
            mx=arr[i];
        }
    }
        cout<<"Max of array is: "<<mx;
    return 0;
}