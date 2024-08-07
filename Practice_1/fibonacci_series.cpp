#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter nth digit: ";
    cin>>n;
    int next;
    int first=0;
    int second=1;
    if (n<0){
        cout<<"Enter a positive no.: ";
    }
    for (int i=0; i<=n; i++){
        cout<<first<<" ";
        next=first+second;
        first=second;
        second=next;
    }
    return 0;
}