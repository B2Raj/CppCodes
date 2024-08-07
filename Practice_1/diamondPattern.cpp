#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
     //Upper part
    for (int i=1; i<=n; i++){
    // spaces
        for (int j=1; j<=n-i; j++){
            cout<<" ";
        }
       // star of upper part
        for (int k=1; k<=2*i-1; k++){
            cout<<"*";
        }
    cout<<endl;
    }
     // lower part
    for (int i=3; i<=1; i--){
        for (int j=1; j<=i; j++){
            cout<<"_";
        }
        for (int k=1; k<=2*i-1; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}