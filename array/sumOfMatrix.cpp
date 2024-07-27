#include<iostream>
using namespace std;
int main(){
    int n,m; 
    cout<<"Enter rows: ";
    cin>>n;
    cout<<"Enter cols: ";
    cin>>m;
    int arr1[n][m], arr2[n][m], sum[n][m];
    cout<<"Enter elements of 1st Matrix: "<<endl;
    // fot taking input of elements of 1st matrix
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter elements of Matrix 2: "<<endl;
    // for taking input of elements of matrix 2
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin>>arr2[i][j];
        }
    }
    // for operation of summation of matrix
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
        sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    cout<<"Sum of Matrices is: "<<endl;
    // for displaying the summation
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}