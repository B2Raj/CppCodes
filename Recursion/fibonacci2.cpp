#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1 || n==2){
        return 1;
    }
    else
    return fibo(n-1)+fibo(n-2);  
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    fibo(n);
    cout<<"Fibonacci of "<<n<<" is:"<<fibo(n);
    return 0;
}