#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    int fact=1;
    for (int i=1; i<=a; i++){
        fact*=i;
        cout<<fact<<endl;;
    }
 return 0;
}