#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    int reverse=0;
    while(x!=0){
        int last_digit=x%10;
        reverse*=10;
        reverse+=last_digit;
        x/=10;
    }
    cout<<reverse;
 return 0;
}