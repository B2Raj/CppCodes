// Q.) Rotate array of k-times.
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
    // for taking input of array
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter rotation terms. ";
    cin>>k;
    reverse(arr, 0, n-k-1);
    reverse(arr, n-k, n-1);
    reverse(arr, 0, n-1);
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}