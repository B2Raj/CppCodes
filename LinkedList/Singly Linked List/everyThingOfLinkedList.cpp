#include<iostream>
using namespace std;
struct node{
    public:
    int data;
    struct node* next;
    node(int data){     // constructor
        this->data=data;
        this->next=NULL;
    }
};
// function for traversing the linkedList
void traverse(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null"<<endl;
}
// function for inserting node at head
void insertAtHead(node* &head, int value){
    node* newNode=new node(value);
   // node* temp=head;
    newNode->next=head;
    head=newNode;
}
    // function for inserting node in middle
void insertAtMiddle(node* &head, int value, int posi){
    node* temp=head;
    node* newNode=new node(value);
    if(posi==1){
        insertAtHead(head,value);
        return;
    }
    int count=1;
    while(count<(posi-1)){
        temp=temp->next;
        count++;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}
// function for inserting node at End
void insertAtEnd(node* &head, int value){
    node* newNode=new node(value);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=NULL;
}
// function for deleting the node from head
void deleteAtHead(node* &head){
    if(head==NULL){
        return;
    }
    node* temp=head;
    head=head->next;
    free(temp);
}
// function for deleting the node from middle
void deleteAtMiddle(node* &head, int position){
    if(position==1){
        deleteAtHead(head);
        return;
    }
    node* temp=head;
    int count=1;
    while(count<(position-1)){
        temp=temp->next;
        count++;
    }
    node* currentNode=temp->next; 
    temp->next=currentNode->next;
    free(currentNode);
}
// function for deleting the node from End
void deleteAtEnd(node* head){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }
    node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    node* lastNode=temp->next;
    temp->next=NULL;
    free(lastNode);
}
// function for updation of node
void updateNode(node*&head,int updatedValue,int posi){
    node* temp=head;
    int count=1;
    while(count<posi){
        temp=temp->next;
        count++;
    }
    temp->data=updatedValue;
}
int main(){
    int a,b,c;
    cout<<"Enter data for 3 nodes: ";
    cin>>a>>b>>c;
    node* node1=new node(a);
    node* node2=new node(b);
    node* node3=new node(c);
    node1->next=node2;
    node1->next->next=node3;
    node3->next=NULL;
    node* head=node1;
    traverse(head);
    int d;
    cout<<"Enter data for Head: ";
    cin>>d; 
    insertAtHead(head,d);
    traverse(head);
    int m,n;
    cout<<"Enter data for middle: ";
    cin>>m;
    cout<<"Enter position: ";
    cin>>n;
    insertAtMiddle(head,m,n);
    traverse(head);
    int e;
    cout<<"Enter data for End: ";
    cin>>e;
    insertAtEnd(head, e);
    traverse(head);
    cout<<"Node after head deleted: ";
    deleteAtHead(head);
    traverse(head);
    cout<<"Node after End deleted: ";
    deleteAtEnd(head);
    traverse(head);
    int f;
    cout<<"Enter positon to be delete: ";
    cin>>f;
    cout<<"Node after middle is deleted: ";
    deleteAtMiddle(head,f);
    traverse(head);
    int p,q;
    cout<<"Enter data for updation: ";
    cin>>q;
    cout<<"Enter position: ";
    cin>>p;
    updateNode(head,q,p);
    traverse(head);
return 0;
}