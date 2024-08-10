#include<iostream>
using namespace std;
void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a, b;
    cout<<"Enter 1ss number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    cout<<"Before swaping: ";
    cout<<a<<" "<<b<<endl;
    swap(&a, &b);
    cout<<"Enter after swaping: ";
    cout<<a<<" "<<b<<endl;
}