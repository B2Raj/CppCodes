#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
class stack{
    private:
    node* head;
    int capacity;   // capacity is the size of stack
    int currentSize=-1;
    public:
    stack(int c){
        currentSize=-1;
        capacity=c;
        head=NULL;
    }
    void push(int value){
        node* newNode=new node(value);
        if(currentSize==capacity){
            cout<<"overFlow.";
            return;
        }
        newNode->next=head;
        head=newNode;
        currentSize++;
        cout<<value<<" is pushed."<<endl;
    }
    void pop(){
        if(head==NULL){
            cout<<"underFlow."<<endl;
            return;
        }
        node* newHead=head->next;
        head->next=NULL;
        int result=head->data;
        delete(head);
        head=newHead;
        cout<<result<<" is poped."<<endl;
    }
    int getTop(){
        if(head==NULL){
        cout<<"stack is Empty."<<endl;
        return INT16_MIN;
        }
        else
            return head->data;
    }
    void isEmpty(){
        if(head==NULL){
            cout<<"Stack is Empty."<<endl;
            return;
        }
        else
            cout<<"Stack is not Empty."<<endl;
            return;
    }
};
int main(){
    int n;
    cout<<"Enter size of stack: ";
    cin>>n;
    stack s(n);
    s.isEmpty();
    s.push(4);
    s.push(32);
    s.push(31);
    s.push(87);
    s.push(42);
    s.push(433);
    cout<<s.getTop()<<" is the top element."<<endl;
    s.pop();
    s.pop();
    s.isEmpty();
    cout<<s.getTop()<<" is the top element."<<endl;
    s.push(13);
    cout<<s.getTop()<<" is the top element."<<endl;
    s.isEmpty();
    return 0;
}