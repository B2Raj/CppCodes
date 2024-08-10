#include<iostream>
using namespace std;
int sum(int x){
    int add;
    if(x==0){
        return 0;
    }
    else
    return x+sum(x-1);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    sum(n);
    cout<<sum(n);
    return 0;
}