#include<iostream>
using namespace std;
bool odd(int x){
    if(x%2==0){
        return false;
    }
    else
    return true;
}
int main(){
    int a,b;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    for (int i=a; i<=b; i++){
        odd(i);
        if(odd(i)){
            cout<<i<<" ";
        }
    }
 return 0;
}