#include<iostream>
using namespace std;
void zigZag(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    zigZag(n-1);
    cout<<n<<" ";
    zigZag(n-1);
    cout<<n<<" ";
    return;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    zigZag(n);
}