#include<iostream>
using namespace std;
int factorial(int x){
    if(x==0){
        return 1;
    }
    else
        return x*factorial(x-1);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    factorial(n);
    cout<<"Factorial: "<<factorial(n);
}