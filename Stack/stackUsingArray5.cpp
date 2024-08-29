#include<iostream>
using namespace std;
class stack{
    int* arr;
    int top;
    int capacity;      // size of array
    public:    
    stack(int length){
        this->capacity=length;
        this->top=-1;
        arr=new int(length);
    }
    void push(int data){
        if(top==capacity-1){
            cout<<"Stack overFlow."<<endl;
            return;
        }
        else
        top++;
        arr[top]=data;
        cout<<arr[top]<<" is pushed: "<<endl;
    }
    void pop(){
        if(top==-1){
            cout<<"Stack underFlow."<<endl;
            return;
        }
        else
            top--;
            cout<<arr[top+1]<<" is popped:"<<endl;
    }
    void peek(){
        if(top==-1){
            cout<<"Stack is Empty."<<endl;
            return;
        }
        else
            cout<<arr[top]<<" is top element."<<endl;
    }
    void isSize(){
        if(top==-1){
            cout<<"Stack is Empty."<<endl;
            return;
        }
        else
           cout<<"Size of Stack is: "<<arr[top+1]<<endl;
    }
    // we can use this function for check the size of stack
    bool _isSize(){
        return top+1;
    }
    void isEmpty(){
        if(top==-1){
            cout<<"Stack is Empty.";
            return;
        }
        else
            cout<<"Stack is not Empty.";
    }
};
int main(){
    stack s(5);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(9);
    s.push(10);
    s.pop();
    s.pop();
    s.peek();
    s.pop();
    s.isSize();
    s.isEmpty();
    s.push(39);
    s.push(42);
    s.push(31);
    s.push(33);
}