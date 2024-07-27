#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter the elements of array: ";
      // for taking input of array
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    bool flag=false; // true means absent
    // for traversing the array
    for (int i=0; i<n; i++){
        if(arr[i]==x){
            arr[i]=true;
            break;
        }
    }
    if(bool==true){
        cout<<x<<" is present.";
    }
    else{
        cout<<x<<" is not present.";
    }
    return 0;
}