#include<iostream>
using namespace std;
int main(){
    // n is for no. of elements in array
    int n;
    cout<<"Enter elements number for array: ";
    cin>>n;
    cout<<"Given array is: "<<" ";
    int arr[n];
    int a=sizeof(arr)/4; // gives the size of array
        // for taking input of array
    for (int i=0; i<a; i++){
        cin>>arr[i];
    }
        // for no. of passes
    for (int i=0; i<a-1; i++){
        bool flag=false;
        for (int j=0; j<a-1; j++){  // will traverse
        // condition for swaping the elements
            if(arr[j]>arr[j+1]){
                // for swapping
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            flag=true;
            }
        }
        if(flag==false)
        break;
    }
    // for displaying the sorted array
    cout<<"The sorted Array is: ";
    for (int i=0; i<a; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}