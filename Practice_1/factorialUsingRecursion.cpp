#include<iostream>
using namespace std;
int factorial (int n){
    int fact=1;
    for (int i=1; i<=n; i++){
        fact*=i;
    }
    cout<<fact;
}
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    factorial(a);
 return 0;
}