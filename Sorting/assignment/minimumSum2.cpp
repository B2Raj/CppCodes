// Given an array of digits(values are from 0 to 9), the task is to find the minimum possible sum of two no. formed from digits of the array.Please note that all digits of the given array must be used to form the two numbers.

            /*  Using Selection Sort    */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number for size of array: ";
    cin>>n;
    int arr[n];
    // for taking input of array
    cout<<"Enter elements of your array: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    // for  giving output of array
    cout<<"Your array is: ";
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for (int i=0; i<n; i++){ // no. of passes
        int min=INT8_MAX;//for storing min value
        int mindx=0;// for storing min value_index
        for (int j=i; j<n; j++){//for traversing
            if(arr[j]<min){
                min=arr[j];
                mindx=j;
            }
        }
        // for swapping the condition
            int temp=arr[i];
            arr[i]=arr[mindx];
            arr[mindx]=temp;
    }
    // for displaying the sorted array
    cout<<"Your sorted array is: ";
        for (int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
// for 1st min no. from the array
    int x=0; 
    for (int i=0; i<n; i++){
        x*=10;
        x+=arr[i];
    }
    cout<<"1st min no. from array is: "<<x<<endl;
    // for 2nd min no. from array
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
    cout<<"2nd min no. from array is: "<<y<<endl;
    cout<<"Sum of those min no. is: "<<x+y<<endl;
return 0;
}