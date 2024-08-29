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
    int capacity;
    int currentSize;
    public:
    stack(int c){
        this->capacity=c;
        this->currentSize=-1;
        head=NULL;
    }
    bool isEmpty(){
        return this->head==NULL;  
    }
    bool isFull(){
        return this->currentSize==this->capacity;
    }
    void push(int value){ 
        if(currentSize==capacity){    
            cout<<"Stack is overFlow."<<endl;
            return;
        }
        node* newNode=new node(value);
        newNode->next=head;
        head=newNode;
        currentSize++;
        cout<<newNode->data<<" is pushed."<<endl;
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
            cout<<"underFlow."<<endl;
            return INT16_MIN;
        }
        return head->data;
    }
    int size(){
        return currentSize;
    }
};
int main(){
    int n;
    cout<<"Enter size of stack: ";
    cin>>n;
    stack s(n);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(22);
    s.push(87);
    cout<<s.getTop()<<" is top element."<<endl;
    s.pop();
    s.pop();
    s.push(43);
    s.pop();
    cout<<s.getTop()<<" is top element."<<endl;
    s.push(32);
    s.push(55);
    s.push(53);
    s.pop();
    cout<<s.getTop()<<" is top element."<<endl;
    s.pop();
    cout<<s.getTop()<<" is top element."<<endl;
    cout<<s.size()<<" is the size of stack."<<endl;
    return 0;
} 