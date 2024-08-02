#include<iostream>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=NULL;
    }   
};
void traverse(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void insertAtHead(Node* &head, int value){
    Node* newNode=new Node(value);
    newNode->next=head;
    head=newNode;
}
int main(){
    Node* node1=new Node(4);
    Node* node2=new Node(5);
    node1->next=node2;
    node2->next=NULL;
    Node* head=node1;
    traverse(head);
    insertAtHead(head, 2);
    traverse(head);
    insertAtHead(head, 4);
    traverse(head);
    return 0;
}