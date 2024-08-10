#include<iostream>
using namespace std;
void swaping(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int x,y;
    cout<<"Enter 1st no.: ";
    cin>>x;
    cout<<"Enter 2nd no. :";
    cin>>y;
    cout<<x<<" "<<y<<endl;
    swaping(&x, &y);
    cout<<x<<" "<<y<<endl;
 return 0;
}