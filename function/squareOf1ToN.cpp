#include<iostream>
using namespace std;
int square(int x){
    int a=x*x;
    return a;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i=1; i<=n; i++){
        square(i);
        cout<<square(i)<<endl;
    }
    return 0;
}