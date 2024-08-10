#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 1st no.: ";
    cin>>a;
    cout<<"Enter 2nd no.: ";
    cin>>b;
    cout<<a<<" "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b<<endl;
 return 0;
}