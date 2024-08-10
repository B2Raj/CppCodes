#include<iostream>
using namespace std;
int main(){
    int row,col;;
    // input of no. of rows and cols
    cout<<"Enter rows: ";
    cin>>row;
    cout<<"Enter cols: ";
    cin>>col;
    int a[row][col],b[row][col];
    int sum[row][col];
    // input of matrix 1 elements
    cout<<"Elements of Matrix 1: "<<endl;
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cin>>a[i][j];
        }
    }
    // input of matrix 2 elements
    cout<<"Elements of Matrix 2: "<<endl;
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cin>>b[i][j];
        }
    }
    // diffenence of matrices
    cout<<"Sum of Matrices is: "<<endl;
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
          sum[i][j]=a[i][j]-b[i][j];
        }
    }
    // displaying the matrices
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}