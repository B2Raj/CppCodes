//Without parameterized way
#include<iostream>
using namespace std;
void print (int n){
    if(n==0){  //base case
        return;
    }
    print(n-1);  // call
    cout<<n<<endl;
 return;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    print(n);
 return 0;
}