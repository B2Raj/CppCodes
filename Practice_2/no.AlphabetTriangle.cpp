#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            if(i%10==1){
                cout<<j<<" ";
            }
            if(i%2!=1){
                cout<<(char)(64+j)<<" ";
            }
            cout<<endl;
    }
    return 0;
    }
}