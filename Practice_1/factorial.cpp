#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    int fact=1;
    for (int i=1; i<=x; i++){
        fact*=i;
    }
    cout<<fact;
 return 0;
}