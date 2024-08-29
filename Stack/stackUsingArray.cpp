#include<iostream>
using namespace std;
class Stack {
    int *arr;
    int size;
    int top;
    public:
    // constructor
    Stack(int s){
        size=s;
        arr=new int[s];
        top=-1;
    }
    // ----> push operation
    void push(int value){
        if(top==size-1){
            cout<<"Stack overFlow: ";
            return;
        }
        else
            top++;
            arr[top]=value;
           cout<<"Pushed "<<arr[top]<<" in Stack. \n";
    }
    // ----> pop opereation
    void pop(){
        if(top==-1){
            cout<<"Stack underFlow: ";
            return;
        }
        else
            top--;
            cout<<"Popped "<<arr[top+1]<<" From the Stack:\n";
    }
    // ----> peek operation
    int peek(){
        if(top==-1){
            cout<<"Stack is empty: ";
            return -1;
        }
        else
            return arr[top];
    }
    // ----> to check the stack i.e. empty or not
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else
            return false;
    }
    // ----> size operation
    int isSize(){
        return top+1;
    }
};
int main(){
    Stack s(5);
    s.push(4);
    s.push(2);
    s.push(6);
    s.push(9);
    s.push(4);
    s.pop();
    cout<<s.peek()<<" at the top of stack. "<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<s.isSize()<<endl;
}