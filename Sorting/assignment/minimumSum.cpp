// Given an array of digits(values are from 0 to 9), the task is to find the minimum possible sum of two no. formed from digits of the array.Please note that all digits of the given array must be used to form the two numbers.

            /*Using Insertion Sort8*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number for size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of your array: ";
    // for taking input of array
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    // for giving output of array
    cout<<"Your array is: ";
    for (int i=0; i<n; i++){   
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for (int i=0; i<n; i++){ //no. of passes
        int j=i; 
        while(j>=1){
            if(arr[j]>=arr[j-1]){
                break;
            }
            if(arr[j]<arr[j-1]){
               // for swap the condition
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            j--;
            }
        }
    }
    // first min no. from the array
      int x=0;
        for (int i=0; i<n; i++){
            x*=10;
            x+=arr[i];
        }
       cout<<"1st min no. of array is: ";
        cout<<x;
    // for second min no. from the array
    for (int i=n-1; i>=1; i--){
        if(arr[i]!=arr[i-1]){
            int temp=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;
            break;
        }
    }
    cout<<endl;
    cout<<"2nd min no. of array is: ";
    int y=0; 
    for (int i=0; i<n; i++){
        y*=10;
        y+=arr[i];
    }
    // second min sorted array
    cout<<y<<endl;
    cout<<"Sum of two smallest no. from the array is: ";
    cout<<x+y;
return 0;
}