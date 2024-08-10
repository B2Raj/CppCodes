#include<iostream>
using namespace std;
void swap(int &x, int &y){
    int temp=x;
    x=y;
    y=temp;
}
int main(){
    int x, y;
    cout<<"Enter 1st number: ";
    cin>>x;
    cout<<"Enter 2nd number: ";
    cin>>y;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
 return 0;
}