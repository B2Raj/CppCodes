#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int *arr=new int[n];
    int target;
    cout<<"Enter target: ";
    cin>>target;
    cout<<"Enter elements of array: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int result=-1; //let say(-1 means element not found)
    for (int i=0; i<n; i++){
        if(arr[i]==target){
            result=i;
            break;  // exit loop once found
        }
    }
    if(result!=-1){
    cout<<"Element is found at index "<<result<<endl;
    }
    else
        cout<<"Element is not found in the array: "<<endl;
    return 0;
}