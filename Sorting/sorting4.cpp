#include<iostream>
using namespace std;
int main(){
    int arr[]={1,5,3,1,5,4,2};
    int n=sizeof(arr)/4;
    for (int i=0; i<n-1; i++){   // no. of passes
        for (int j=0; j<n-1; j++){  //traverse
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for (int i=0; i<n; i++){    //displaying the output
        cout<<arr[i]<<" ";
    }
    return 0;
}