#include<iostream>
using namespace std;
int factorial(int x){
    int fact=1;
    for (int i=1; i<=x; i++){
        fact*=i;
    }
    return fact;
}
int combination(int a, int b){
    int c,d,e;
    c=factorial(a);
    d=factorial(b);
    e=factorial(a-b);
 return c/(d*e);
}
int main(){
    int q;
    cout<<"Enter a number: ";
    cin>>q;
    for (int i=0; i<=q; i++){
            for (int k=0; k<=q-i; k++){
                cout<<" ";
            }
        for (int j=0; j<=i; j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}