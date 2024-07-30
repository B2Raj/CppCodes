#include<iostream>
using namespace std;
void vote(int a){
    if(a>=18 && a<150){
        cout<<"The person can Vote.";
    }
    else if(a<18 && a>0){
        cout<<"The person can't Vote.";
    }
    else 
    cout<<"Age is not defined.";
}
int main(){
    int n;
    cout<<"Enter your age: ";
    cin>>n;
    vote(n);
}