#include<iostream>
using namespace std;
int main(){
    int m; 
    cout<<"Enter a number for size of array: ";
    cin>>m;
    int arr[m];
    int n=sizeof(arr)/4;    // gives size of arrray
        // for taking of input array
    cout<<"Enter elements of array: "<<endl;
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
        // for no. of passes
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-1; j++){  // will traverse
        // for check condition of array
            if(arr[j]==0){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
        // for displaying the sorted output
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}