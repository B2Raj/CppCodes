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
int main(){
    node* node1=new node(3);
    node* node2=new node(8);
    node* node3=new node(1);
    node1->next=node2;