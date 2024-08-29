#include<iostream>
using namespace std;
class stack{
    int *arr;
    int top;
    int capacity;
    public:
    stack(int c){
        this->capacity=c;
        top=-1;
        arr=new int(c); 
    }
    void push(int data){
        if(top==capacity-1){
            cout<<"Stack overFlow."<<endl;
            return;
        }
        top++;
        arr[top]=data;
        cout<<arr[top]<<" is pushed."<<endl;
    }
    void pop(){
        if(top==-1){
            cout<<"Stack underFlow."<<endl;
            return;
        }
        top--;
        arr[top];
        cout<<arr[top+1]<<" is poped."<<endl;
    }
    void peek(){
        if(top==-1){
            cout<<"Stack underFlow."<<endl;
            return;
        }
        else
            cout<<arr[top]<<" is top element."<<endl;
    }
    void isEmpty(){
        if(top==-1){
            cout<<"Stack is Emtpy."<<endl;
            return;
        }
        cout<<"Stack is not empty."<<endl;
        return;
    }
    int isSize(){
        if(top==-1){
            cout<<"Stack is underFlow."<<endl;
            return INT16_MIN;
        }
        else
            cout<<"Size of stack is: "<<arr[top+1]<<endl;
    }
};
int main(){
    stack s(5);
    s.isEmpty();
    s.pop();
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(9);
    s.push(10);
    s.pop();
    s.pop();
    s.peek();
    s.push(32);
    s.pop();
    s.peek();
    s.isSize();
    s.isEmpty();
    s.push(39);
    s.push(42);
    s.push(31);
    s.push(33);
    s.peek();
return 0;
}