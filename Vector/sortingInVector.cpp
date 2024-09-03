#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of vector: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter vector's elements: ";
    // for traversing the vector
    for (int i=0; i<v.size(); i++){
        cin>>v[i];
    }
    cout<<endl;
    sort(v.begin(),v.end());

    for (int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}