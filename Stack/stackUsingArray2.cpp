#include<iostream>
using namespace std;
class Stack{
    int top;
    int size;
    int  *arr;
    public:
    Stack(int s){       // constructor
        size=s;
        top=-1;
        arr=new int[s];
    }
    // ----> push function
    void push(int value){
        if(top==size-1){
            cout<<"Stack overFlow.";
            return;
        }
        else
            top++;
            arr[top]=value;
            cout<<"Pushed->"<<arr[top]<<endl;
    }
    // ----> pop function
    void pop(){
        if(top==-1){
            cout<<"Stack underFlow.";
            return;
        }
        else
            top--;
            cout<<"Popped->"<<arr[top+1]<<endl;
    }
    // ----> peek function
    int peek(){
        if(top==-1){
            cout<<"Stack is empty.";
            return -1;
        }
        else
            return arr[top];
    }
    void isEmpty(){
        if(top==-1){
            cout<<"Stack is Empty.";
            return;
        }
        else
            cout<<"Stack is not Empty.";
            return;
    }
    int isSize(){
        return top+1;
    }
};
int main(){
    Stack s(6);
    s.push(4);
    s.push(7);
    s.push(9);
    s.push(2);
    s.push(18);
    s.push(12);
    cout<<"Top is: "<<s.peek()<<endl;
    s.pop();
    s.pop();
    cout<<"Top is: "<<s.peek()<<endl;
    s.isEmpty();
    cout<<endl;
    cout<<s.isSize();
}