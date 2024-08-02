/*Find the middle element of the given linkedList.*/

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
    while(head!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null";
    cout<<endl;
}
// void insertNodeAtHead(node* head,int value){
//     node* newNode=new node(value);
//     newNode->next=head;
//     head=newNode;
// }
void insertNodeAtEnd(node* &head,int value){
    node* temp=head;
    node* newNode=new node(value);
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=NULL;
}
int findMiddleNode(node* &head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    // slow is now at the middle position
    return slow->data;
}
int main(){
    node* head=NULL;
    insertNodeAtEnd(head,1);
    insertNodeAtEnd(head,2);
    insertNodeAtEnd(head,3);
    insertNodeAtEnd(head,4);
    insertNodeAtEnd(head,5);
    insertNodeAtEnd(head,6);
    traverse(head);
    cout<<findMiddleNode(head)<<endl;
    return 0;
}