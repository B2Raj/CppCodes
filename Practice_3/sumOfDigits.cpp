#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    int sum=0;
    while(a!=0){
        int last_digit=a%10;
        a/=10;
        sum+=last_digit;
    }
    cout<<sum;
}