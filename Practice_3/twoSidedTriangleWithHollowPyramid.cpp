#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    // For upper part
    for (int i=1; i<=2*n+1; i++){
        cout<<i<<" ";
    }
    cout<<endl;
    // For half triangle
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n+1-i; j++){
            cout<<i<<" ";
        }
    // For space due to pyramid
        for (int k=1; k<=2*i-1; k++){
            cout<<"  ";
        }
    // For another half triangle
        for (int l=1; l<=n+1-i; l++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}