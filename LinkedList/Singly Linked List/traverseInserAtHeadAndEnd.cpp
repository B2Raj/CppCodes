#include<iostream>
using namespace std;
struct Node{
    public:
    int data;
    struct Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void traverse(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp-> next;
    }
    cout<<"null"<<endl;
}
void insertAtHead(Node* &head, int value){
    Node* newNode=new Node(value);
    newNode->next=head;
    head=newNode;
}
void insertAtEnd(Node* &head, int value){
    Node* newNode=new Node(value);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
int main(){
    Node* node1=new Node(4);
    Node* node2=new Node(5);
    Node* node3=new Node(6);
    node1->next=node2;
    node1->next->next=node3;
    node3->next=NULL;
    Node* head=node1;
    traverse(head);
    insertAtHead(head,3);
    traverse(head);
    insertAtHead(head,2);
    traverse(head);
    insertAtEnd(head,7);
    traverse(head);
    insertAtEnd(head,8);
    traverse(head);
return 0;
}