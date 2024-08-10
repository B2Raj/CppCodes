#include<iostream>
using namespace std;
void sum(int a, int b){
    cout<<a+b;
}
int main(){
    int a, b;
    cout<<"Enter 1st no.: ";
    cin>>a;
    cout<<"Enter 2nd no.: ";
    cin>>b;
    sum(a,b);
    return 0;
}