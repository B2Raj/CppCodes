#include<iostream>
using namespace std;
class Stack{
    public:
    int *arr;
    int top;
    int size;
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int elements){
        if(size-top>1){
            top++;
        }
        else
            cout<<"Stack overFlow."<<endl;
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else
            cout<<"Stack underFlow."<<endl;
    }
    int peek(){
        if(top>=0 ){
            return arr[top];
        }
        else
            cout<<"Stack is Empty.";
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else
            return false;
    }

};
int main(){
    Stack st(6);
    st.push(43);
    st.push(2);
    st.push(42);
    st.push(42);
    


}