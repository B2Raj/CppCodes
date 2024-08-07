#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter rows: ";
    cin>>m;
    cout<<"Enter cols: ";
    cin>>n;
    int matrix1[m][n], matrix2[m][n], sum[m][n];
    // for takint input of matrix 1
    cout<<"Enter elements of Matrix1: ";
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cin>>matrix1[i][j];
        }
    }
    // for takint input of matrix 2
    cout<<"Enter elements of Matrix2: ";
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cin>>matrix2[m][n];
        }
    }
    // operation of sum of matrices
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            sum[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
    // displaying the sum of matrices
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cout<<sum[i][j];
        }
        cout<<endl;
    }
    return 0;
}