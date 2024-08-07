#include<iostream>
using namespace std;
int factorial(int x){
    if(x==0){
        cout<<1;
    }
    else{
        int fact=1;
        for (int i=1; i<=x; i++){
            fact*=i;
        }
        cout<<fact;
    }
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    factorial(n);
}