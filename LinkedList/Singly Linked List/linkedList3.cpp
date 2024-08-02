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
void traverse(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-> ";
        temp=temp->next;
    }
    cout<<"Null"<<endl;
}
void insertAtHead(node* &head, int valueForBegin){
    node* newNode=new node(valueForBegin);
    newNode->next=head;
    head=newNode;
}
int main(){
    node* node1=new node(3);
    node* node2=new node(4);
    node* node3=new node(5);
    node1->next=node2;
    node2->next=node3;
    node* head=node1;
    traverse(head);
    insertAtHead(head, 2);// for add node at begin
    traverse(head);
    insertAtHead(head, 1);// for add node at begin
    traverse(head);
    return 0;
}