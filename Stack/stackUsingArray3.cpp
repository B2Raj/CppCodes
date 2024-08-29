#include<iostream>
using namespace std;
class stack{
    int *arr;
    int top;
    int size;
    public:
    stack(int s){   //constructor
        arr=new int[s];
        top=-1;
        size=s;
    }
    // ----> push function
    void push(int value){
        if(top==size-1){
            cout<<"Stack is overFlow.";
            return;
        }
        else
            top++;
            arr[top]=value;
            cout<<"Pushed-> "<<arr[top]<<endl;
            return;
    }
    // ----> pop function
    void pop(){
        if(top==-1){
            cout<<"Stack is underFlow.";
            return;
        }
        else
            top--;
            cout<<"Popped-> "<<arr[top+1];
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
    // ----> Empty checket function
    void isEmpty(){
        if(top==-1){
            cout<<"Stack is Emtpy.";
            return;
        }
        else
            cout<<"Stack is not Empty.";
            return;
    }
    // ----> check size function
    int isSize(){
        return top+1;
    }
};
int main(){
    stack s(7);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(31);
    s.push(10);
    s.pop();
    cout<<endl;
    s.pop();
    cout<<endl;
    cout<<"Size-> "<<s.isSize();
}