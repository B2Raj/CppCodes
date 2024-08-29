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
class stack{
    node* top;
    int size;   // give actual size of stack
    public:
    stack(){    // constructor
        top=NULL;
        size=0;
    }
    // push function
    void push(int value){
        node* newNode=new node(value);
        if(newNode==NULL){
           cout<<"OverFlow."<<endl;
           return;
        }
        newNode->next=top;
        top=newNode;
        size++;
        cout<<"Pushed->"<<value<<endl;
    }
    // pop function
    void pop(){
        node* temp=top;
        if(top==NULL){
            cout<<"Stack underFlow.";
            return;
        } 
        cout<<"Popped->"<<top->data<<endl;
        top=top->next;
        delete (temp);
    }
    // peek function
    void peek(){
        if(top==NULL){
            cout<<"Stack is Empty.";
            return;
        }
        else
            cout<<"Top->";
            cout<< top->data;
    }
    // empty function
    bool isEmpty(){
        if(top==NULL){
            return true;
        }
        else
            return false;
    }
    // size function
    int isSize(){
        cout<<"Size is->";
        return size;
    }
};
int main(){
    stack s;
    s.push(4);
    s.push(3);
    s.push(23);
    s.push(42);
    cout<<s.isSize()<<endl;
    s.pop();
    s.peek();
    cout<<endl;
    s.pop();
    s.peek();
    cout<<endl;
    cout<<s.isEmpty();
    cout<<endl;
    cout<<s.isSize();
    return 0;
}