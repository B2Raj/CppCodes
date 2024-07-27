#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter number of rows: ";
    cin>>a;
    cout<<"Enter number of cols: ";
    cin>>b;
    int arr[a][b];
    cout<<"Enter elements of the matrix: "<<endl;
    for (int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Your matrix is: "<<endl;
    for (int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transpose of matrix is: "<<endl;
    for (int i=0; i<b; i++){
        for (int j=0; j<a; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}