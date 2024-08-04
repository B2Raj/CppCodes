#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i=1; i<=n; i++){
    // Spaces
        for (int k=1; k<=n-i; k++){
            cout<<"  ";
        }
    // Half Triangle
        for (int j=1; j<=i; j++){
            cout<<j<<" ";
        }
    // Remaining Triangle
    int x=i-1;
        for (int l=1; l<=i-1; l++){
            cout<<x<<" ";
            x--;
        }
        cout<<endl;
    }
    return 0;
}