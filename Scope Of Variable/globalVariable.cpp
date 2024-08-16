// In global variable, we can access the variable from any function or block of code, and global variable is declared outside the fuction or block of code.
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for (int i=1; i<=n; i++){
        cout<<i+n;
        cout<<endl;
    }
 return 0;
}