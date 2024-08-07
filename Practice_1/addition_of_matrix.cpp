#include<iostream>
using namespace std;
int main(){
    // Taking input for the elements.
    int a[2][3], b[2][3], sum[2][3];
    cout<<"Enter elements of Matrix 1: "<<endl;
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter elements of Matrix 2: "<<endl;
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            cin>>b[i][j];
        }
    }
    // Adding matrices.
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    // Displaying matrix after addition.
    cout<<"Addition of matrices is: "<<endl;
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}