#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number: ";
cin>>n;
int arr[n];
cout<<"Enter your elements of array: "<<endl;
for (int i=0; i<n; i++){
cin>>arr[i];
   }
int x=sizeof(arr)/4;
   for (int i=0; i<x-1; i++){	// no. of passes
	for (int j=0; j<x-1; j++){	// will traverse
	if(arr[j]>arr[j+1]){	// for check condition
	// for swaping
	int temp=arr[j];
	arr[j]=arr[j+1];
	arr[j+1]=temp;
     }
   }
 }
// displaying the sorted array
for (int i=0; i<x; i++){
cout<<arr[i]<<" ";
   }
return 0;
}