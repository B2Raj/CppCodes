//Que..Reverse part of array means you can only reverse the array from the fixed indeces like if there is an array like [3,5,8,1,2,4,2,3,2] and suppose you have to reverse from 2nd index from begining and 6th index from the last then sorted arrray will be like [3,5,2,4,2,1,8,3,2].
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int *arr=new int[n];   
    cout<<"Enter elements: ";
    // for taking input of array
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int i=2, j=n-2;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    cout<<"Your sorted part is: ";
    // for displaying the array
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}