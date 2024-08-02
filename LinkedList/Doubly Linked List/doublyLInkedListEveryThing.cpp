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
        cout<<temp->data<<"<->";
        temp=temp->next;
    }
    cout<<"Null";
    cout<<endl;
}
void insertNodeAtHead(node* &head, int value){
    node* temp=head;
    node* newNode=new node(value);
    if(head==NULL){
        head=newNode;
        return;
    }
    newNode->next=temp;
    temp->prev=newNode;
    head=newNode;
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
    temp->next->prev=newNode;
    temp->next=newNode;
    newNode->prev=temp;
}
void insertNodeAtEnd(node* &head,int value){
    node* temp=head;
    node* newNode=new node(value);
    if(head==NULL){
        head=newNode; 
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;
    newNode->next=NULL;
}
void deleteNodeAtHead(node* &head){
    node* temp=head;
    if(head==NULL){
        return;
    }
    temp=temp->next;
    temp->prev=NULL;
    delete(temp);
}
void deleteNodefromMiddle(node* &head, int posi){
    node* temp=head;
    if(posi==1){
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
void deleteNodeAtEnd(node* &head){
    node* temp=head;
    if(head==NULL){
        return;
    }
    if(temp->next==NULL){
        deleteNodeAtHead(head);
        return;
    }
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    node* currentNode=temp->next;
    temp->next=NULL;
    delete(currentNode);
}
    int main(){
    int a,b,c;
    cout<<"Enter data for doubly LinkedList: ";
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
    cout<<"Current doubly linkedList is: ";
    traverse(head);
    int x;
    cout<<"Enter data for insert at HEAD: ";
    cin>>x;
    cout<<"Doubly linkedList after inserting node at Head: ";
    insertNodeAtHead(head,x);
    traverse(head);
    int y,p1;
    cout<<"Enter data for inserting node at Middle: ";
    cin>>y;
    cout<<"Enter position: ";
    cin>>p1;
    cout<<"Doubly linkedList after inserting node in Middle: ";
    insertNodeAtMiddle(head,y,p1);
    traverse(head);
    int e;
    cout<<"Enter data for inserting node at End: ";
    cin>>e;
    cout<<"Doubly linkedList after inserting node at end: ";
    insertNodeAtEnd(head,e);
    traverse(head);
    cout<<"Doubly linkedList after head is deleted: ";
    deleteNodeAtHead(head);
    traverse(head);
    int p2;
    cout<<"Enter position to delete from List: ";
    cin>>p2;
    cout<<"Doubly linkedList after middle node is deleted: ";
    deleteNodefromMiddle(head,p2);
    traverse(head);
    cout<<"Doubly linkedList after end is deleted: ";
    deleteNodeAtEnd(head);
    traverse(head);
}