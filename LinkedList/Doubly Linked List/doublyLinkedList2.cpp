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
        this->prev=NULL;
    }
};
void traverse(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"--";
        temp=temp->next;
    }
    cout<<"NULL";
}
void insertNodeAtHead(node* &head,int value){
    node* temp=head;
    node* newNode=new node(value);
    if(head==NULL){
        return;
    }
    newNode->next=temp;
    temp->prev=newNode;
    head=newNode;
}
void insertNodeAtEnd(node* &head, int value){
    node* temp=head;
    node* newNode=new node(value);
    if(head->next==NULL){
        insertNodeAtHead(head,value);
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;
    newNode->next=NULL;
}
void insertNodeAtMiddle(node* &head,int value,int posi){
     node* temp=head;
    node* newNode=new node(value);
    if(posi==1){
        insertNodeAtHead(head,value);
        return;
    }
    int count=1;
    while(count<(posi-1)){
        temp=temp->next;
        count++;
    }
    newNode->next=temp->next;
    newNode->prev=temp;
    temp->next=newNode;
}
void deleteNodeAtHead(node* head){
    node* temp=head;
    if(head==NULL){
        return;
    }
    temp=temp->next;
    temp->prev=NULL;
    delete(temp);
}
void deleteNodeAtEnd(node* head){
    node* temp=head;
    if(temp->next==NULL){
        deleteNodeAtHead(head);
        return;
    }
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    node* lastNode=temp->next;
    temp->next=NULL;
    delete(lastNode);
}
void deleteNodeAtMiddle(node* head,int posi){
    node* temp=head;
    if(head==NULL){
        return;
    }
    if(temp->next==NULL){
        deleteNodeAtHead(head);
        return;
    }
    int count=1;
    while(count<(posi-1)){
        temp=temp->next;
        count++;
    }
    node* currentNode=temp->next;
    temp->next=currentNode->next;
    currentNode->next->prev=temp;
    delete(currentNode);
}
int main(){
    int a,b,c;
    cout<<"Enter data for Doubly linkedList: ";
    cin>>a>>b>>c;
    node* node1=new node(a);
    node* node2=new node(b);
    node* node3=new node(c);
    node1->next=node2;
    node2->next=node3;
    node3->prev=node2;
    node2->prev=node1;
    node1->prev=NULL;
    node3->next=NULL;
    node* head=node1;
    cout<<"Current linkedList is:";
    traverse(head);
    cout<<endl;
    int x;
    cout<<"Enter data for insert node at head: ";
    cin>>x;
    insertNodeAtHead(head,x);
    traverse(head);
    cout<<endl;
    int e;
    cout<<"Enter data for insert node at End: ";
    cin>>e;
    insertNodeAtEnd(head,e);
    traverse(head);
    cout<<endl;
    int z,p1;
    cout<<"Enter data for insert node at Middle: ";
    cin>>z;
    cout<<"Enter position: ";
    cin>>p1;
    insertNodeAtMiddle(head,z,p1);
    traverse(head);
    cout<<endl;
    cout<<"List after head is deleted: ";
    deleteNodeAtHead(head);
    traverse(head);
    cout<<"List after end is deleted: ";
    deleteNodeAtEnd(head);
    traverse(head);
    cout<<endl;
    int p2;
    cout<<"Enter position to be delete: ";
    cin>>p2;
    cout<<"List after Middle is deleted: ";
    deleteNodeAtMiddle(head,p2);
    traverse(head);
return 0;
}