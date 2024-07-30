#include<iostream>
using namespace std;
int cube(int x){
    int a=x*x*x;
    return a;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i=1; i<=n; i++){
        cube(i);
        cout<<cube(i)<<endl;
    }
    return 0;
}