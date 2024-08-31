#include<iostream>
using namespace std;
int sumOfArray(int *arr, int n){
    int sum=0;
    for (int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter a number for size of array: ";
    cin>>n;
    int *arr=new int[n];// new keyword is use for use Heap memory that is dynamic allocation.
    // for taking input of array
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    sumOfArray(arr, n);
    cout<<"Sum of array: "<<sumOfArray(arr,n);
    return 0;
}