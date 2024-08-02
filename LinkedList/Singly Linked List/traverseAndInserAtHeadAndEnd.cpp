#include<iostream>
using namespace std;
struct node{
    public:
    int data;
    struct node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void traverse(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"null"<<endl;
}
void insertAtHead(node* &head, int value){
    node* newNode=new node(value);
    newNode->next=head;
    head=newNode;
}
void insertAtEnd(node* &head, int value){
    node* newNode=new node(value);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
int main(){
    node* node1=new node(5);
    node* node2=new node(6);
    node* node3=new node(7);
    node1->next=node2;
    node1->next->next=node3;
    node3->next=NULL;
    node* head=node1;
    traverse(head);
    insertAtHead(head, 4);
    traverse(head);
    insertAtHead(head, 3);
    traverse(head);
    insertAtEnd(head, 8);
    traverse(head);
    insertAtEnd(head, 9);
    traverse(head);
    return 0;
}