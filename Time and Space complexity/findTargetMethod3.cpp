#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,4};
    int n=(sizeof(arr)/4)-1;
    int sumOfArray=0;
    for (int i=0; i<=n; i++){
        sumOfArray+=arr[i];
    }
    int s=n*(n+1)/2; // sum of 1 to size of array
    cout<<"Target element is: "<<sumOfArray-s;
    return 0;
}