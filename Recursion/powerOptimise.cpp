#include<iostream>
using namespace std;
int power(int x, int y){
    if(y==0){
        return 1;
    }
    int n=power(x, y/2);
    if(y%2==0){
        return n*n;
    }
    else
        return n*n*x;
}
int main(){
    int a,b;
    cout<<"Enter base: ";
    cin>>a;
    cout<<"Enter power: ";
    cin>>b;
    power(a,b);
    cout<<a<<" raise to the power "<<b<<" is: "<<power(a,b);
    return 0;
}