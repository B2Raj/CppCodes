#include<iostream>
using namespace std;
int factorial(int x){
    int fact=1;
    for (int i=1; i<=x; i++){
        fact*=i;
    }
    return fact;
}
int main(){
        int n,r;
        cout<<"Enter n: ";
        cin>>n;
        cout<<"Enter r: ";
        cin>>r;
    int a,b,c;
    a=factorial(n);
    b=factorial(r);
    c=factorial(n-r);
    cout<<"Combi=ination: "<<a/(b*c);
 return 0;
}