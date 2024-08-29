#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> a;
    a.push(8);
    a.push(3);
    a.push(4);
    a.push(5);
    a.push(6);
    a.push(8);
    a.pop();
    a.pop();
    int x=a.top();
    cout<<x<<endl;
    if(a.empty()){
        cout<<"under flow."<<endl;
    }
    else{
    cout<<"Stack is not empty."<<endl;
    }
    cout<<"Size of stack is: "<<a.size()<<endl;
    return 0;
}