#include<iostream>
using namespace std;
int main(){
    int a[2][2], b[2][2], difference[2][2];
    cout<<"Enter elements of Matrix 1: "<<endl;
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter elements of Matrix 2: "<<endl;
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cin>>b[i][j];
        }
    }
    // Difference of Matrices.
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            difference[i][j]=a[i][j]-b[i][j];
        }
    }
    // Displaying the Difference of Matrices.
    cout<<"Difference of matrix is. "<<endl;
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cout<<difference[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}