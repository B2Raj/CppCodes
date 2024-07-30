#include<iostream>
#include<cmath>
using namespace std;
int power(int x, int y){
    int a=pow(x,y); // pow is function to calculate power
    return a;
}
int main(){
    int m,n;
    cout<<"Enter base: ";
    cin>>m;
    cout<<"Enter power: ";
    cin>>n;
    power(m,n);
    cout<<power(m,n);
    return 0;
}