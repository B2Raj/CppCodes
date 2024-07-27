#include<iostream>
using namespace std;
void reverse(int arr[], int i, int j){
    while(i<j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
    }
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter elements: ";
    // for taking input of array elements
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    reverse(arr,2, 5);
    cout<<"Your required array is: ";
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}