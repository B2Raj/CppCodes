#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    if(a>b and a>c){  // a is lagrest and so, b can never be the the greatest.
        cout<<a<<" is lagest.";
    }
    else if(b>a and b>c){ // b is largest and so, c can never be the greatest.
        cout<<c<<" is greatest.";
    }
    else{
    cout<<c<<" is largest.";
    }
    return 0;
}