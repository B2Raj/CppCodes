#include<iostream>
using namespace std;
int main(){
 int row,col;
    cout<<"Enter number of Rows: ";
    cin>>row;
    cout<<"Enter number of Cols: ";
    cin>>col;
    int a[row][col],b[row][col];
    int sum[row][col];
    // input of matrix 1st elements
  cout<<"Enter the elements of Matrix 1: "<<endl;
    for (int i=0; i<col; i++){
        for (int j=0; j<col; j++){
            cin>>a[i][j];
        }
  }
 //input of matrix 2nd elements
 cout<<"Enter the elements of Matrix 2: "<<endl;
 for (int i=0; i<row; i++){
    for (int j=0; j<col; j++){
        cin>>b[i][j];
    }
 }
    // Summation of matrices
    cout<<"Sum of Matrices: "; 
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
sum[i][j]=a[i][j]+b[i][j];
        }
    }
       // displaying the sum
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}