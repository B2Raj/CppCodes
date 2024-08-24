#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int *arr=new int[n];
    cout<<"Array's elements are: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    for (int i=1; i<n; i++){    // No. of passes
        int j=i;
        while(j>=1){
            if(arr[j]>=arr[j-1]){
                break;
            }
            else{
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
            j--;
        }
    }
    cout<<"Your sorted array is: "<<endl;
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}