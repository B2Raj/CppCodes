#include<iostream>
using namespace std;
int fact(int n){
    if(n==1 || n==0){ // base case
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    fact(n);
    cout<<"Factorial of "<<n<<" is "<<fact(n);
 return 0;
}