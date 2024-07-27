#include<iostream>
using namespace std;
int main(){
    int arr[3][2];
    cout<<"Entet elements of array: "<<endl;
    for (int i=0; i<3; i++){
        for (int j=0; j<2; j++){
            cin>>arr[i][j];
        } 
    }
    cout<<"Your required formed Matrix is."<<endl;
    for (int i=0; i<3; i++){
        for (int j=0; j<2; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}