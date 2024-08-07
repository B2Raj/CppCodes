#include<iostream>
using namespace std;
int fibo(int n){
    if(n<=1){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Fibonacii series of "<<n<<" is: ";
    for (int i=0; i<n; ++i){
        cout<<fibo(i)<<" ";
    }
    return 0;
}