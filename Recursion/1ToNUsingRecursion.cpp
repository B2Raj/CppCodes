#include<iostream>
using namespace std;
// Parameterized way
void print(int a, int b){
    if(a>b){  //base case
        return;
    }
    cout<<a<<endl;
    return print(a+1,b);   //call
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    print(1,n);
 return 0;
}