#include<iostream>
using namespace std;
void sum(int x, int y){
    if(x==0){
        cout<<"Sum: "<<y;
        return;
    }
    sum(x-1, y+x);
    return;
}
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    sum(a,0);
    return 0;
}