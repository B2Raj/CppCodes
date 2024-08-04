#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i=1; i<=n*2-1; i+=2){
        cout<<i<<" ";
    }
    return 0;
}