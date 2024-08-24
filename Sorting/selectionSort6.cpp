#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no. for size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Your array is: "<<endl;
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    // Selection sort
    for (int i=0; i<n-1; i++){  //for no. of passes
        int min=INT16_MAX;//  for store min elem.
        int mindx=-1;//for store the index of minElement
        for (int j=i; j<n; j++){// for traversing
            // for check condition 
            if(arr[j]<min){
                min=arr[j]; //storing the min value
                mindx=j;  // storing the index
            }
        }
        //for swaping the condition in array
        int temp=arr[i];
        arr[i]=arr[mindx];
        arr[mindx]=temp;
    }
    cout<<"Your sorted array is: "<<endl;
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}