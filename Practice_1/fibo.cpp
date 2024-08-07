#include<iostream>
using namespace std;
int fibo(int x){
    if(x==1 || x==2){
        return 1;
    }
    else
        return fibo(x-1)+fibo(x-2);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    fibo(n);
    cout<<"Fibo of "<<n<<" is: "<<fibo(n);
 return 0;
}