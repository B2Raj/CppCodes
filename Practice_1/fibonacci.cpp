#include<iostream>
using namespace std;
int fibonacci(int n){
    int fact=1;
    if(n==1 || n==2){
        return 1;
    }
    else 
    for (int i=1; i<=n; i++){
        fact*=i;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    fibonacci(n);
    cout<<fibonacci(n);
}