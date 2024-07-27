#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of arrray: ";
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter array's elements: ";
    // for taking input of array's elements
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    // for traversing the array that is the no. of passes
    int target;
    cout<<"Enter a no. for which you find doubled: ";
    cin>>target;
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==target){
            cout<<"Doublet of "<<target<<" is: ";
                cout<<arr[i]<<" "<<arr[j]<<endl;
                // for storing the indices
                arr[i]=i;
                arr[j]=j;
                cout<<"Indeces of doubled are: ";
                cout<<arr[i]<<" "<<arr[j];
                break;
            }
        }
    }
    return 0;
}