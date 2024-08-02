#include<iostream>
using namespace std;
struct node{
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
    cout<<"Null"<<endl;
}
int reverse(node* &head){
    node* current=head;
    node* forward;
    node* previous=NULL;
    while(current!=NULL){
        forward=current->next;
        current->next=previous;
        previous=current;
        current=forward;
    }
    return previous;
}
int main(){
    node* node1=new node(3);
    node* node2=new node(4);
    node* node3=new node(5);
    node1->next=node2;
    node2->next=node3;
    node3->next=NULL;
    node* head=node1;
    traverse(head);
    node* newHead=reverse(head);
    traverse(head);
}