#include<iostream>
using namespace std;
int factorial(int s){
    int fact=1;
    for (int i=1; i<=s; i++){
        fact*=i;
    }
    return fact;
}
int ncr(int x, int y){
    int a,b,c;
    a=factorial(x);
    b=factorial(y);
    c=factorial(x-y);
    return a/(b*c);
}
int main(){
    int p;
    cout<<"Enter a number: ";
    cin>>p;
    for (int i=0; i<=p; i++){
        for (int j=0; j<=i; j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}