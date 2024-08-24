// Given an array of digits(values are from 0 to 9), the task is to find the minimum possible sum of two no. formed from digits of the array.Please note that all digits of the given array must be used to form the two numbers.

            /*  Using Bubble Sort  */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number for size of matrix: ";
    cin>>n;
    int arr[n];
    // for taking input of array by user
    cout<<"Enter the elements of array: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    // for displaying the given array
    cout<<"Your array is: ";
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }   
    }
    // for displaying the sorted array
    cout<<"Your sorted array is: ";
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    // for 1st min from the array
    int x=0;
    for (int i=0; i<n; i++){
        x*=10;
        x+=arr[i];
    }
    cout<<"1st min no. from the array is: ";
    cout<<x<<endl;
    // for 2nd min from the array
    for (int i=n-1; i>=1; i--){
        if(arr[i]!=arr[i-1]){
            int temp=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;
            break;
        }
    }
        int y=0;
    for (int i=0; i<n; i++){
        y*=10;
        y+=arr[i];
    }
        cout<<"2nd min no. from the array is: ";
        cout<<y<<endl;
    // for sum of the min array
    cout<<"Sum of those min no. of array is: ";
    cout<<x+y;
    return 0;
}