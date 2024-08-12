#include<iostream>
using namespace std;
void print(int x, int y){
    if(x>y){
        return;
    }
    cout<<x<<" ";
    print(x+1, y);
    return;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    print(1,n);
    return 0;
}