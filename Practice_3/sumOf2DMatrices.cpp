#include<iostream>
using namespace std;
int main(){
    int a[2][2], b[2][2],sum[2][2];
    // input for Matrix 1
cout<<"Enter the elements of Matrix 1: "<<endl;
    for (int i=0; i<=1; i++){
        for (int j=0; j<=1; j++){
            cin>>a[i][j];
        }
    }
    // input for Matrix 2
cout<<"Enter the elements of Matrix 2: "<<endl;
    for (int i=0; i<=1; i++){
        for (int j=0; j<=1; j++){
            cin>>b[i][j];
        }
    }
    // sum of matrices
    for (int i=0; i<=1; i++){
        for (int j=0; j<=1; j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    // Displaying the sum
    cout<<"Sum of matrices is: "<<endl;
    for (int i=0; i<=1; i++){
        for (int j=0; j<=1; j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}