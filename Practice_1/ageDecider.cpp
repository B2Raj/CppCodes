#include<iostream>
using namespace std; 
int main(){
    int a,b,c;
    cout<<"Enter age of Bittu: ";
    cin>>a;
    cout<<"Enter age of Akansha: ";
    cin>>b;
    cout<<"Enter age of Shivam: ";
    cin>>c;
    if(a<b && a<c){
        cout<<"Bittu is Youngest: "<<endl;
    }
    else if(b<a and b<c){
        cout<<"Akansha is Youngest: "<<endl;
    }
    else if(c<a && c<b){
        cout<<"Shivam is Youngest: "<<endl;
    }
    return 0;
}