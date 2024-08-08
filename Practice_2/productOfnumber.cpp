#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int product=1;
    while(n!=0){
        int last_digit=n%10;
        n/=10;
        product*=last_digit;
    }
    cout<<product;
 return 0;
}