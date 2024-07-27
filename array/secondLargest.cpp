#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int *arr=new int[n];
    // for taking input of array
    cout<<"Enter elements of array: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int mx=INT16_MIN;   // mx will store largest
    int s_mx=INT16_MIN;// s_mx will store 2nd largest
        // for traversing the array
    for (int i=0; i<n; i++){
        if(arr[i]>mx){
            mx=arr[i];
        }
    }
    for (int i=0; i<n; i++){
        if(arr[i]>s_mx && arr[i]!=mx){
            s_mx=arr[i];
        }
    }
    cout<<"Largest elements of array is: "<<mx<<endl;
    cout<<"2nd largest element of array is: "<<s_mx;
    return 0;
}
