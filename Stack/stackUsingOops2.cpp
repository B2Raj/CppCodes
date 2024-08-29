#include<iostream>
using namespace std;
class Stack{
    public:
        int *arr;
        int size;
        int top;
    Stack(int size){
        this->size=size;
        top=-1;
    }
    void push(int elements){
        if(size-top>1){
            top++;
            arr[top]=elements;
        }
        else
            cout<<"Stack is overFlow."<<endl;
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else
            cout<<"Stack is underFlow."<<endl;
    }    
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else
            cout<<"Stack is Empty."<<endl;
            return -1;
    }
    bool isEmpty(){
        if(top==-1){
            true;
        }
        else
            false;
    }
};
int main(){
    Stack st(5);
    st.push(42);
    st.push(79);
    st.push(12);
    st.pop();
    cout<<st.peek()<<endl;
}