#include<iostream>
using namespace std;
int main(){
    //1,2,3,4,5,6
    int x=1;
    int y=100000;
    // int sum=0;
    // for (int i=x; i<=y; i++){
    //     sum+=i;
    // }
    // cout<<sum;
    int a=x;
    // a==1, also can be called common difference.
    // cout<<a;
    //no.of terms=y-x+1;
    int n=y-x+1;
    // cout<<n;
    int result;
    result=n/2*(2*a+(n-1)*a);
    cout<<result;
    return 0;
}