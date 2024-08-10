#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter no. of rows: ";
    cin>>n;
    int m;
    cout<<"Enter no. of cols: ";
    cin>>m;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}