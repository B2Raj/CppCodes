#include<iostream>
using namespace std;
int power(int a, int b){
    if(b==0){
        return 1;
    }
    else
        return a*power(a,b-1);
}
int main(){
    int x,y;
    cout<<"Enter base: ";
    cin>>x;
    cout<<"Enter power: ";
    cin>>y;
    power(x,y);
    cout<<x<<" raise to the power "<<y<<" is: "<<power(x,y);
return 0;
}