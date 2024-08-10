#include<iostream>
using namespace std;
int sum(int n){
    int sum=0;
    for (int i=0; i<=n; i++){
        sum+=i;
    }
    cout<<sum;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    sum(n);
   // cout<<sum;
 return 0;
}