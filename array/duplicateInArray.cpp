#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter array's elements: ";
    // for taking input of elements
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
      // for traversing the array that is no. of passes
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
              cout<<arr[i]<<" is dublicates \n";
                break;
            }
        }
    }
    return 0;
}