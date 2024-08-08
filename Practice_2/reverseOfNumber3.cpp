#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    int r=0;    //r is reverse.
    while(a!=0){
        int ld=a%10;   // ld is lastdigit.
        r*=10;
        r+=ld;
        a/=10;
    }
    cout<<r;
}