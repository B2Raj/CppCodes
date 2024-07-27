#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    // dynamic memory allocation is created
    int *arr=new int[n];
    cout<<"Enter the elements of array: ";
    // for taking input of array
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int mn=INT16_MAX;//mn will store smallest
    int s_mn=INT16_MAX;//s_mn will store 2nd smallest
      // for traversing the array
    for (int i=0; i<n; i++){
        if(arr[i]<mn){
            mn=arr[i];
        }
    }
    for (int i=0; i<n; i++){
        if(arr[i]<s_mn && arr[i]!=mn){
            s_mn=arr[i];
        }
    }
    // for displaying the result
    cout<<"Smallest element of array is: "<<mn<<endl;
    cout<<"Second smallest element of array is: ";
    cout<<s_mn;
return 0;
}