#include<iostream>
using namespace std;
int main(){
    int row, col;
// input of rows and columns
    cout<<"Enter rows: "<<endl;
    cin>>row;
    cout<<"Enter cols: "<<endl;
    cin>>col;
    int a[row][col],b[row][col];
    int product[row][col]={0};
// input of matrices elements
 // for 1st matrix elements
 cout<<"Enter Matrix 1 elements: "<<endl;
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cin>>a[i][j];
        }
    }
// for 2nd matrix elements
 cout<<"Enter Matrix 2 elements: "<<endl;
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cin>>b[i][j];
        }
    }
// multiplication of matrices
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            product[i][j]+=a[i][j]*b[i][j];
        }
    }
// displaying the matrices
 cout<<"Multiplication of Matrices: "<<endl;
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cout<<product[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}