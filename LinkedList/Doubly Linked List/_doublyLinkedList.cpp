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
void traverse(node* head){      // constructor
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"--";
        temp=temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}
// this function for insert node at Head
void insertNodeAtHead(node* &head,int value){
    node* temp=head;
    node* newNode=new node(value);
    if(head==NULL){
        head->next=newNode;
        head=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}
// ----> this function is for insert node at End
void insertNodeAtEnd(node* &head,int value){
    node* temp=head;
    node* newNode=new node(value);
    if(head==NULL){
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=NULL;
}
// ----> this function is for insert node at Middle
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
    temp->next=newNode;
    newNode->prev=temp;
}
// ----> this function is for delete node at Head
void deleteNodeAtHead(node* head){
    node* temp=head;
    if(head==NULL){
        return;
    }
    head=temp->next;
    head->prev=NULL;
    delete(temp);
}
// ----> this function is for delete node from End
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
// ----> this function if fot delete node from Middle
void deleteNodeAtMiddle(node* head,int posi){
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
int main(){
    int a,b,c,d;
    cout<<"Enter data for Doubly LinkedList: ";
    cin>>a>>b>>c>>d;
    node* node1=new node(a);
    node* node2=new node(b);
    node* node3=new node(c);
    node* node4=new node(d);
    node1->next=node2;
    node2->next=node3;
    node3->next=node4;
    node4->prev=node3;
    node3->prev=node2;
    node2->prev=node1;
    node1->prev=NULL;
    node4->next=NULL;
    node* head=node1;
    traverse(head);
    int x;
    cout<<"Enter data for insert node at Head: ";
    cin>>x;
    cout<<"List after Head is inserted: ";
    insertNodeAtHead(head,x);
    traverse(head);
    int y;
    cout<<"Enter data for insert node at End: ";
    cin>>y;
    cout<<"List after End is inserted: ";
    insertNodeAtEnd(head,y);
    traverse(head);
    int z,p1;
    cout<<"Enter data for insert node at Middle: ";
    cin>>z;
    cout<<"Enter position: ";
    cin>>p1;
    cout<<"List after Middle is inserted: ";
    insertNodeAtMiddle(head,z,p1);
    traverse(head);
    cout<<"List after Head is deleted: ";
    deleteNodeAtHead(head);
    traverse(head);
    cout<<"List after End is deleted: ";
    deleteNodeAtEnd(head);
    traverse(head);
    int p2;
    cout<<"Enter position for delete the node: ";
    cin>>p2;
    deleteNodeAtMiddle(head,p2);
    traverse(head);
    cout<<"<-----Required Doubly LinkedList is----->";
    cout<<endl;
    cout<<"          ";
    traverse(head);
    return 0;
}