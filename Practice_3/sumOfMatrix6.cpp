#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter rows for Matrix 1: ";
    cin>>a;
    cout<<"Enter cols for Matrix 2: ";
    cin>>b;
    int arr1[a][b], arr2[a][b], sum[a][b];
    // for taking input elements of matrix 1
    cout<<"Enter elements of Matrix 1: "<<endl;
    for (int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            cin>>arr1[i][j];
        }
    }
    // for taking input of elements of matrix 2
    cout<<"Enter elements of Matrix 2: "<<endl;
    for (int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            cin>>arr2[i][j];
        }
    }
    // summation of matrix is performed here !
    for (int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    // for displayint the sum of matrices
    cout<<"Addition of Matrices is: "<<endl;
    for (int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}