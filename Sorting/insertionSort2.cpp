#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number for size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Your array is: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    // Insertion sort
    for (int i=1; i<n; i++){   // for no. of passes
        int j=i;
        while(j>=1){    // for traversing
            if(arr[j]>=arr[j-1]) {
                break;
            }
            if(arr[j]<arr[j-1]){
                // for swap
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
            j--;
        }
    }
        // for displayint the sorted array
        cout<<"Your sorted array is: ";
        for (int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
    return 0;
}