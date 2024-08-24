#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no. for size of array: ";
    cin>>n;
    int arr[n];
    // for taking inpur of array
    cout<<"Enter your array elements: "<<endl;
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    // for displaying the array
    cout<<"Your array is: "<<endl;
    for (int i=0; i<n; i++){
        cout<<arr[i];
    }
    for (int i=1; i<n; i++){   //for no. of passes
        int j=i;
        //for traversing and checking the condition
        while(j>=1 && arr[j]<arr[j-1]){
            // for swaping the elements
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
        j--;
        }
    }
    // for displaying the sorted array 
    cout<<"Your sorted array is: "<<endl;
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}