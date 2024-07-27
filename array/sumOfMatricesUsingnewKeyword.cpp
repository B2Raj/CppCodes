#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter rows: ";
    cin>>a;
    int *arr1=new int[a];
    int *arr2=new int[a];
    // for taking input of 1st array
    cout<<"Enter the elements of 1st array: ";
    for (int i=0; i<a; i++){
        cin>>arr1[i];
    }
    // for taking input of 2nd array
    cout<<"Enter the elements of 2nd array: ";
    for (int i=0; i<a; i++){
        cin>>arr2[i];
    }
    // sum of array
    int *sum=new int[a];
    sum=0;
    for (int i=0; i<a; i++){
        sum[i]=arr1[i]+arr2[i];
    }
    //for displaying the sum
    cout<<"Sum of the array is: ";
    for (int i=0; i<a; i++){
        cout<<sum[i]<<" ";
    }
    return 0;
}