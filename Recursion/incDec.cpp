#include<iostream>
using namespace std;
void incDec(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    cout<<endl;
    incDec(n-1);
    cout<<endl;
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    incDec(n);
    return 0;
}