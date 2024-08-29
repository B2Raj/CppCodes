#include<iostream>
using namespace std;
class stack{
    private:
        int capacity;
        int top;
        int* arr;
    public:
    stack(int length){  // length is the capacity of stack
        this->capacity=length;
        this->top=-1;
        arr=new int(length);
    }
    void push(int data){
        if(top==capacity-1){
            cout<<"Stack overFlow."<<endl;
            return;
        }
        top++;
        arr[top]=data;
        cout<<arr[top]<<" is pushed: "<<endl;
    }
    void pop(){
        if(top==-1){
            cout<<"Stack is underFlow."<<endl;
            return;
        }
        else    
            top--;
            cout<<arr[top+1]<<" is popped: "<<endl;
    }
    int getTop(){
        if(top==-1){
            cout<<"Stack is underFlow."<<endl;
            return INT16_MIN;
        }
        cout<<arr[top]<<" is the top element: "<<endl;
        return arr[top];
    }
    int isSize(){
        cout<<"Size of stack is: "<<endl;
        return arr[top+1];
    }
    void isEmpty(){
        if(top==-1){
            cout<<"Stack is emtpy: "<<endl;
        }
        else
            cout<<"Stack is not Empty."<<endl;
    }
    void isFull(){
        if(top==capacity-1){
            cout<<"Stack is full."<<endl;
            return;
        }
        else
            cout<<"Stack is not full. "<<endl;
    }
};
int main(){
    stack a(5);
    a.push(5);
    a.push(2);
    a.push(3);
    a.push(9);
    a.getTop();
    a.pop();
    a.getTop();
    a.isEmpty();
    a.isSize();
    a.push(19);
}