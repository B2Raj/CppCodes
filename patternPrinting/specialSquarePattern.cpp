#include<iostream>
using namespace std;
int main(){
    // if n=4
    /*1111111
      1222221
      1233321
      1234321
      1233321
      1222221
      1111111*/
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i=1; i<=2*n-1; i++){
        for (int j=1; j<=2*n-1; j++){
            int a=i;
            if(i>n){
                a=2*n-i;             
            }
            int b=j;
            if(j>n){
                b=2*n-j;              
            }
            if(i<j){
                cout<<a<<" ";
            }
            else
                cout<<b<<" ";
        }
        cout<<endl;
    }
}