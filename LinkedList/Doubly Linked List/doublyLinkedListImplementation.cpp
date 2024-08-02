#include<iostream>
using namespace std;
struct node{
    public:
    int data;
    node* next;
    node* prev;
    node(int data){
        this->data=data;
        this->next=NULL;
        this->next=NULL;
    }
};
void forwardTraversal(node* head){

}
void backwardTraversal(node* head){

}
void insertAtHead(node* &head,int value){

}
void insertAtMiddle(node* &head,int value,int posi){

}
void insertAtEnd(node* &head,int value){

}
void deleteAtHead(node* head){

}
void deleteAtMiddle(node* &head,int posi){

}
void deleteAtEnd(node* head){

}
int main(){
    int a,b,c;
    cout<<"Enter data for Doublu LinkedList: ";
    cin>>a>>b>>c;
    node* node1=new node(a);
    node* node2=new node(b);
    node* node3=new node(c);
    node1->next=node2;
    node2->next=node3;
    node2->prev=node1;
    node3->prev=node2;
    node1->prev=NULL;
    node3->next=NULL;
    node* head=node1;
    forwardTraversal(head);
    backwardTraversal(head);
}