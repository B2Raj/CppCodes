#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of Vector: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter vector's elements: "<<endl;
    for (int i=0; i<n; i++){
        cin>>v[i];
    }
    cout<<"Output of vector's elements are: \n";
    for (int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}