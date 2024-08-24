#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number for size of array: ";
    cin>>n;
    int arr[n];
        // for taking inpur of array
    cout<<"Enter elements of your array: "<<endl;
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    // for displayint the output of array
    cout<<"Your array is: "<<endl;
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for (int i=1; i<n; i++){    //for no.of passes
        int j=i; 
        // for check the condition 
        while(j>=1){
            if(arr[j]>=arr[j-1]){
                break;
            }
            else{
                // for swaping the condition
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
            j--;
        }
    }
    // for displaying the sorted array
    cout<<"Your sorted array is: "<<endl;
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}