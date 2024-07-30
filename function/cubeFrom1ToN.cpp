#include<iostream>
using namespace std;
int cube(int i){
    int a=i*i*i;
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