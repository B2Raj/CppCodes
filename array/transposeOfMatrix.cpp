#include<iostream>
using namespace std;
int main(){
    int arr1[2][2];
    cout<<"Enter elements of matrix: "<<endl;
    for (int i=0; i<=1; i++){
        for (int j=0; j<=1; j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Transpose of matrix is: "<<endl;
    for (int i=0; i<=1; i++){
        for (int j=0; j<=1; j++){
            cout<<arr1[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}