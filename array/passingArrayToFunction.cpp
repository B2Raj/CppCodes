#include<iostream>
using namespace std;
void change(int arr[]){
    arr[3]=34;
    cout<<arr[3];
}
int main(){
    int arr[]={4,2,4,2,1};;
    cout<<arr[3]<<endl;
    change(arr);
    // in array, by default those are pass by reference. No copy created in another function.
}