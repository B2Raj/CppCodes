#include<iostream>
using namespace std;
int factorial(int n){
    if(n==1 || n==0)
    return 1;
    else 
    return n*factorial(n-1);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    factorial(n);
    cout<<factorial(n);
return 0;
}