#include<iostream>
using namespace std;
struct node{
    public:
    int data;
    node* next;
    public:
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
class stack{
    private:
    // c is the size of stack
    int capacity;
    int currentSize;
    node* head;
    public:
    stack(int c){
        capacity=c;
        currentSize=-1;
        head=NULL;
    }
    void push(int value){
        node* newNode=new node(value);
        if(currentSize==capacity-1){
            cout<<"overFlow."<<endl;
            return;
        }
        newNode->next=head;
        head=newNode;
        currentSize++;
        cout<<value<<" is pushed."<<endl;
    }
    void pop(){
        if(head==NULL){
            cout<<"Stack underFlow."<<endl;
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
            cout<<"Stack is Empty."<<endl;
            return INT16_MIN;
        }
        return head->data;
    }
    void isEmpty(){
        if(head==NULL){
            cout<<"Stack is Empty."<<endl;
            return;
        }
        else
            cout<<"Stack is not Empty."<<endl;
    }
};
int main(){
    int n;
    cout<<"Enter the size of Stack: ";
    cin>>n;
    stack s(n);
    s.push(342);
    s.push(422);
    s.push(42);
    s.push(43);
    s.push(423);
    s.push(823);
    s.push(986);
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