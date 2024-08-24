/* Given an array of digits(values are from 0 to 9), the task is to find the minimum possible sum of two no. formed from digits of the array.Please note that all digits of the given array must be used to form the two numbers. */

            /*Using Insertion Sort */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a numberfor size of array: ";
    cin>>n;
    int arr[n];
    // for taking input of array
        cout<<"Enter elements of array: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    // for taking output of array
        cout<<"Your array is: ";
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
        cout<<endl;
    for (int i=1; i<n; i++){    // no. of passes
        int j=i; 
        while(j>=1){// for traversing
            if(arr[j]>=arr[j-1]){ // condition
                break;
            }
            if(arr[j]<arr[j-1]){
                // for swapping the condition
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
            j--;
        }
    }
        // for displaying the sorted array
        cout<<"Your sorted array is: ";
        for (int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    // for 1st min no from array
    int x=0; 
    for (int i=0; i<n; i++){
        x*=10;
        x+=arr[i];
    }
        cout<<"First min no. from array is: ";
        cout<<x<<endl;
    
        // for 2nd min no. from the array
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
    cout<<"Second min no. from the array is: ";
    cout<<y<<endl;
    cout<<"Sum of those min no. from the array is: "<<x+y<<endl;
    return 0;
}