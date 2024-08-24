#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a no. for size of array: ";
cin>>n;
int arr[n];
cout<<"Your array is: ";
// for taking inpur of array
for (int i=0; i<n; i++){
	cin>>arr[i];
	}
		// for no. of passes
	for (int i=1; i<n; i++){
		int j=i;
	// for traversing the array
	while(j>=1){
		// it will check the condition
		if(arr[j]>=arr[j-1]){
		break;
		}
		if(arr[j]<arr[j-1]){
	// for swaping the elments
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
return 0;
}