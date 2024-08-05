#include<iostream>
using namespace std;
int main(){
    int num=3;
    int *a=&num;
    cout<<a<<endl;
    cout<<num<<endl;
    cout<<*a<<endl;
    float b=5;
    float *c=&b; //stores address
    cout<<b<<endl;
    cout<<*c<<endl;// gives value of address.
    cout<<c<<endl; // gives address of b
    cout<<&b<<endl;// also give address of b
    cout<<&c<<endl;
    cout<<*c++<<endl;
    cout<<++c<<endl;
    cout<<--*c<<endl;
return 0;
}