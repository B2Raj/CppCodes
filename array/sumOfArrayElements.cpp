#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int *arr=new int[n];
    // for taking iput of array
    cout<<"Enter elements of your array: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum=0;
    for (int i=0; i<n; i++){
        sum+=arr[i];
    }
    cout<<"Sum of array's elements is: ";
    cout<<sum;
    return 0;

}