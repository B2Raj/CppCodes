#include<iostream>
using namespace std;
struct node{
    public:
    int data;
    struct node* next;
    // constructor
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
// function to traverse the linked list
void traverse(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"null"<<endl;
}
// for inserting node at begining
void insertAtHead(node* &head, int value){
    node* newNode=new node(value);
    newNode->next=head;
    head=newNode;
}
    // for inserting node at the end
void insertAtEnd(node* &head, int value){
    if(head==NULL){
        insertAtHead(head,value);
        return;
    }
    node* newNode=new node(value);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
int main(){
    node* node1=new node(3);
    node* node2=new node(8);
    node* node3=new node(1);
    node1->next=node2;
    node1->next->next=node3;
    node3->next=NULL;
    node* head=node1;
    traverse(head);
    insertAtHead(head,5);
    traverse(head);
    insertAtHead(head,7);
    traverse(head);
    insertAtEnd(head,2);
    traverse(head);
    insertAtEnd(head,4);
    traverse(head);
    return 0;
}