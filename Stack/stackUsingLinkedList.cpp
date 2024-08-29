#include<iostream>
using namespace std;
struct node{
    public:
    int data;
    node* next;
    node(int data){     // constructor
        this->data=data;
        this->next=NULL;
    }
};
class Stack{
    node* top;
    int size;   // actual size of stack
    public:
    Stack(){        // constructor
        top=NULL;
        size=0;
    }
    // ----> function for push the node into the stack
    void push(int value){
        node* newNode=new node(value);
        if(newNode==NULL){
            cout<<"Stack overFlow."<<endl;
            return;
        }
        else
            newNode->next=top;
            top=newNode;
            size++;
            cout<<"Pushed->"<<value<<endl;
    }
    // ----> function for pop the nodes into the stack
    void pop(){
            node* temp=top;
        if(top==NULL){
            cout<<"Stack is underFlow.";
            return;
        }
        else{
            cout<<"Popped->"<<top->data<<endl;
            top=top->next;
            delete(temp);
        }
    }
    // ----> function to display the top node of stack
    int peek(){
        if(top==NULL){
            cout<<"Stack is Empty.";
            return -1;
        }
        cout<<"Peek node is: ";
        return top->data;
    }
    // ----> function for check the stack Empty or not
    void isEmpty(){
        if(top==NULL){
            cout<<"Stack is Emtpy.";           
        }
        else
            cout<<"Stack is not Empty.";            
    }
    // ----> function for check the size of stack
    int isSize(){
        cout<<"Size is->";
        return size;
    }
};
int main(){
    Stack s;
    s.push(4);
    s.push(22);
    s.push(2);
    s.push(5);
    s.push(23);
    s.push(42);
    s.pop();
    s.push(32);
    s.pop();
    cout<<s.isSize()<<"\n";
    s.pop();
    cout<<s.peek()<<endl;
    cout<<s.isSize()<<endl;
    s.isEmpty();
}