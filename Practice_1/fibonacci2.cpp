#include<iostream>
using namespace std;
int fibonacci(int x){
    if(x==0 || x==1){
        return 1;
    }
    else
    return fibonacci(x-1)+fibonacci(x-2);
}
int main(){
    int a;
    cout<<"Enter a number: ";
    cout<<a;
    fibonacci(a);
    cout<<"fibo"<<" of<"<<a<<" is: "<<fibonacci(a);
 return 0;
}