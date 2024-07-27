#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number for size of array: ";
    cin>>n;
    int* arr=new int[n];
    cout<<"Enter the elements of your array: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum=0;
    for (int i=0; i<n; i++){
        sum+=arr[i];
    }
    cout<<"Sum of array is: ";
    cout<<sum<<" ";
return 0;
}