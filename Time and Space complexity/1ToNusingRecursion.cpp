#include<iostream>
using namespace std;
void print(int a, int n){
    if(a>n){
        return;
    }
    cout<<a<<" ";
     print(a+1, n);
    return;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    print(1,n);
 return 0;
}