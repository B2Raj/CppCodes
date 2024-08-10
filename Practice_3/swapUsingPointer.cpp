#include<iostream>
using namespace std;
int swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int n, m;
    cout<<"Enter 1st no.: ";
    cin>>n;
    cout<<"Enter 2nd no.: ";
    cin>>m;
    cout<<n<<" "<<m<<endl;
    swap(&n,&m);
    cout<<n<<" "<<m<<endl;
 return 0;
}