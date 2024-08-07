#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if((i+j)%2==0){
                 cout<<" *";
            }
            if((i+j)%2!=0){
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}