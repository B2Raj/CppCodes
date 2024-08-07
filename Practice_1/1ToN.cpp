#include<iostream>
using namespace std;
void print(int a, int b){
    if(a>b){
        return;
    }
    cout<<a<<endl;
    print(a+1,b);
    return;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    print(1,n);
 return 0;
}