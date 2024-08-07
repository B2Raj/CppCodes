#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter rows: ";
    cin>>a;
    cout<<"Enter cols: ";
    cin>>b;
    int mat1[a][b], mat2[a][b],sum[a][b];
    // input the elements of matrix 1
    cout<<"Enter the elements of Matrix 1: "<<endl;
    for (int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            cin>>mat1[i][j];
        }
    }
    // input of elements of matrix 2
    cout<<"Enter the elements of Matrix 2: "<<endl;
    for (int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            cin>>mat2[i][j];
        }
    }
    //summation of Matrices
    for (int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            sum[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    // Displaying the summation
    cout<<"Addition of Matrices is: "<<endl;
    for (int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}