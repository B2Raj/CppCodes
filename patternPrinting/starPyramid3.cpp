#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no.: ";
    cin>>n;
    int a=0;
    for (int i=0; i<n; i++){
        for (int j=0; j<i; j++){
            cout<<i<<"  ";
            a+=2;
        }
    }
}
