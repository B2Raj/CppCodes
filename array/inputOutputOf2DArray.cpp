#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    //a is rows, b is cols
    int arr[a][b];
    for (int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            cin>>arr[i][j];
        }
    }
    for (int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}