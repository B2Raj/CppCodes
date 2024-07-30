#include<iostream>
using namespace std;
int sum(int x, int y){
   int c=x+y;
    return c;
}
int main(){
    int a,b;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    sum(a,b);
    cout<<sum(a,b);
 return 0;
}