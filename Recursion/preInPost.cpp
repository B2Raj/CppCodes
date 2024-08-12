#include<iostream>
using namespace std;
void preInPost(int n){
    if(n==0) return;
    cout<<"Pre: "<<n<<endl;
    preInPost(n-1);
    cout<<"In: "<<n<<endl;
    preInPost(n-1);
    cout<<"Post: "<<n<<endl;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    preInPost(n);
    return 0;
}