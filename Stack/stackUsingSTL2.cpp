#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(4);
    s.push(5);
    s.push(2);
    s.push(5);
    s.pop();
    cout<<"Top elements: "<<s.top()<<endl;
    if(s.empty()){
        cout<<"Stack is empty: "<<endl;
    }
    else{
        cout<<"Stack is not empty: "<<endl;
    }
    s.push(8);
    cout<<"Top elements: "<<s.top()<<endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout<<"Size of stack is: "<<s.size()<<endl;
    cout<<"Top elements: "<<s.top()<<endl;
    return 0;
}