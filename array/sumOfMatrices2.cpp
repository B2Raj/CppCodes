#include<iostream>
using namespace std;
int main(){
    int n,m;
    // n is rows and m is cols
    cout<<"Enter row: ";
    cin>>n;
    cout<<"Enter cols: ";
    cin>>m;
    int arr1[n][m], arr2[n][m];
    int sum[n][m];
    cout<<"Enter elements of Matrix 1: "<<endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter elements of Matrix 2: "<<endl;
    for (int k=0; k<n; k++){
        for (int j=0; j<n; j++){
            cin>>arr2[k][j];
        }
    }
    // addition of Matrices.
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    // displaying the sum of Matrices
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}