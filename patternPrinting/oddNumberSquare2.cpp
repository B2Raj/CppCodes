#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i=1; i<=2*n-1; i+=2){
        for (int j=1; j<=2*n-1; j+=2){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}