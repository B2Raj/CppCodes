#include<iostream>
using namespace std;
int main(){
    int arr[]={2,1,4,13,3,5,43,22,13,43};
    int n=sizeof(arr)/4;
    cout<<"Target elements are: ";
    bool flag=false;
    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
                flag=true;
                break;
            }
        }
    }
}