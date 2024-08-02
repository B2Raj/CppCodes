/*Given the head of a linkedList, delete every alternate element from the list starting from the second element.
ex:-input n=6 i.e.list=1,2,3,4,5,6 then ouptur:-1,3,5.*/

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
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null";
    cout<<endl;
}
void insertNodeAtHead(node* &head,int value){
    node* newNode=new node(value);
    newNode->next=head;
    head=newNode;
}
void deleteAlternerNode(node* &head){
    node* temp=head;
    while(temp!=NULL && temp->next!=NULL){
        node* deleteNode=temp->next;
        temp->next=temp->next->next;
        temp=temp->next;
        delete(deleteNode);
    }
}
int main(){
    node* head=NULL;
    insertNodeAtHead(head,1);
    insertNodeAtHead(head,2);
    insertNodeAtHead(head,3);
    insertNodeAtHead(head,4);
    insertNodeAtHead(head,5);
    insertNodeAtHead(head,6);
    traverse(head);
    deleteAlternerNode(head);
    traverse(head);
    return 0;
}