#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            int x=(n+1)/2;
        if(i==x || j==x){
            cout<<"*"<<" ";
        }
        else
        cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}