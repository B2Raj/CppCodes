#include<iostream>
using namespace std;
void print(int a){
    if(a==0){
        return;
    }
    cout<<a<<endl; 
    print(a-1);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    print(n);
}