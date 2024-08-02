#include<iostream>
using namespace std;
struct node{
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
void insertAtHead(node* &head, int value){
    node* newNode=new node(value);
    newNode->next=head;
    head=newNode;
}
int main(){
    node* node1=new node(1);
    node* node2=new node(2);
    node* node3=new node(3);
    node1->next=node2;
    node2->next=node3;
    node3->next=NULL;
    node* head=node1;
    traverse(head);
    insertAtHead(head, 0);
    traverse(head);
    insertAtHead(head, -1);
    traverse(head);
return 0;
}