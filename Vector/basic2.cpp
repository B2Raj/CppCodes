#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of Vector: ";
    cin>>n;
    vector<int> v(n,7);// By default 4 will assign according to size of vector
    for (int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
    return 0;
}