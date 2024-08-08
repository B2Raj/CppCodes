#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    for (int i=4; i>=1; i--){
        for (int j=4; j>=i; j--){
        cout<<j<<" ";
        }
    cout<<endl;
    }
    return 0;
}