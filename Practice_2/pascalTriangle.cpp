#include<iostream>
using namespace std;
int factorial(int x){
    int fact=1;
    for (int i=1; i<=x; i++){
        fact*=i;
    }
    return fact;
}
int ncr(int n, int r){
    int a,b,c;
    a=factorial(n);
    b=factorial(r);
    c=factorial(n-r);
    return a/(b*c);
}
int main(){
    int p;
    cout<<"Enter a number: ";
    cin>>p;
    int n,r;
    for (int i=0; i<=p; i++){
        for (int j=0; j<=i; j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}