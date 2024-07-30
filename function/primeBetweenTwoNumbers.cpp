#include<iostream>
using namespace std;
bool print(int x){
    if(x%x==0 && x%1==0){
        return true;
    }
    else
    return false;
}
int main(){
    int a,b;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Ente 2nd number: ";
    cin>>b;
    for (int i=a; i<=b; i++){
        print(i);
        if(print(i)){
        cout<<print(i)<<" ";
        }
    }
 return 0;
}