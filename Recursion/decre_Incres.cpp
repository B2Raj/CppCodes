#include<iostream>
using namespace std;
void print1(int a){
    if(a==0){
        return;
    }
    cout<<a<<endl;
    print1(a-1);
 return;
}
void print (int a, int b){
    if(a>b){
        return;
    }
    cout<<a<<endl;
    print(a+1,b);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    print1(n);
    print(1,n);
 return 0;
}