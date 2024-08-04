#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i=1; i<=n; i++){
    // Spaces
        for (int j=1; j<=n-i; j++){
            cout<<"  ";
        }
    // Half Alphabets Characters
        for (int k=1; k<=i; k++){
            cout<<(char)(64+k)<<" ";
        }
    // Remaining Alphabet Characters
    int x=i-1;
        for (int l=1; l<=i-1; l++){
            cout<<(char)(x+64)<<" ";
            x--;
        }
            cout<<endl;
    }
    return 0;
}