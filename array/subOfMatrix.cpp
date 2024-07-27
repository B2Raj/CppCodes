#include<iostream>
using namespace std;
int main(){
    int a,b;
    // a is rows and b is cols
    cout<<"Enter rows and cols: ";
    cin>>a>>b;
    cout<<"Enter of elements Matrix 1: "<<endl;
    int arr1[a][b],arr2[a][b], difference[a][b];
    cout<<"Enter elements of Matrix 1: "<<endl;
    for (int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter elements of Matrix 2: "<<endl;
    for (int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            cin>>arr2[i][j];
        }
    }
    // difference of Matrices.
    for (int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            difference[i][j]=arr1[i][j]-arr2[i][j];
        }
    }
    // displaying the sum of Matrices.
    for (int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            cout<<difference[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}