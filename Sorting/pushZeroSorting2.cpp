#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int arr[n];
    // for taking input of array
    cout<<"Enter elements of your array: "<<endl;
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    // it will give the array by user input
    cout<<"Your array is: "<<endl;
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for (int i=0; i<n-1; i++){  // no. of passes
        for (int j=0; j<n-1; j++){ // for traverse
        // for check condition
            if(arr[j]==0){
            // performs swaping operation if the condition will be true
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    // for displaying the output of sorted array
    cout<<"Your sorted pushZero array is: "<<endl;
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}