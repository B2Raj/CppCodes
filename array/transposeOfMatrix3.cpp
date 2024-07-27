#include<iostream>
using namespace std;
int main(){
    int a, b; // a is rows and b is cols.
    cout<<"Enter rows: ";
    cin>>a;
    cout<<"Enter cols: ";
    cin>>b;
    int arr[a][b];// Matrix
    cout<<"Enter Matrix elements: "<<endl;
    for (int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Your Matrix is: "<<endl;
    for (int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transpose of Matrix is: "<<endl;
    for (int i=0; i<b; i++){
        for (int j=0; j<a; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}