#include<iostream>
using namespace std;
int main(){
    int a,b;
    //a is rows, and b is cols.
    cin>>a;
    cin>>b;
    int arr1[a][b],arr2[a][b],sum[a][b];
    cout<<"Enter the elements of Matrix 1: "<<endl;
    //for input of elements of matrix 1
    for (int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter the elements of Matrix 2: "<<endl;
    //for input of elements of matrix 2
    for (int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            cin>>arr2[i][j];
        }
    }
    //for summation of matrices
    for (int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    //for displaying the sum of matrices
    cout<<"Sum of matrices is: "<<endl;
    for (int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}