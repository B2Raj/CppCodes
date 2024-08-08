#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int r=0;
    while(n!=0){
        int last_digit=n%10;
        r*=10;
        r+=last_digit;
        n/=10;
    }
    cout<<r;
return 0;
}