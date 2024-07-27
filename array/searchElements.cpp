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
    int x;
    cout<<"Enter elements which you want to search: ";
    cin>>x;
    bool flag=false; // false means absent
    for (int i=0; i<n; i++){
        if(arr[i]==x){
            flag=true;  // true means present
            break;
        }
    }
    if(flag==true){
        cout<<x<<" is present.";
    }
    else
        cout<<x<<" is not present.";
    return 0;
}