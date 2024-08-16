#include<iostream>
using namespace std;
int fun(){
    cout<<n; // here there is an error because n is not declared in this function, n is declared in main function of block.
}
int main(){
    int n=9;
    cout<<n;
    fun(n);
    cout<<endl;
}