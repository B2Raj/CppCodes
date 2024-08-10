#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter 1st no.: ";
    cin>>a;
    cout<<"Enter 2nd no.: ";
    cin>>b;
    cout<<a<<" "<<b<<endl;
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;
 return 0;
}