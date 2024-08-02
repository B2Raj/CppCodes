#include<iostream>
using namespace std;
struct node{
    public:
    int data;
    struct node* next;
    node(int data){        // constructor
        this->data=data;
        this->next=NULL;
    }
};
// function for traversing the node
void traverse(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"null"<<endl;
}
// inserting the node at head function
void insertAtHead(node* &head, int value){
    node* newNode=new node(value);
    node* temp=head;
    newNode->next=head;
    head=newNode;
}
// inserting the node in middle, function
void insertAtMiddle(node* &head, int value, int posi){
    if(posi==1){
        insertAtHead(head,value);
        return;
    }
    node* newNode=new node(value);
    node* prev=head;
    int count=1;
    while(count<(posi-1)){
        prev=prev->next;
        count++;
    }
    // prev is pointing to the node that should come before newNode
    newNode->next=prev->next;
    prev->next=newNode;
}
// inserting the node at end function
void insertAtEnd(node* &head, int value){
    node* newNode=new node(value);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
int main(){
    int a,b,c;
    cout<<"Enter data: ";
    cin>>a>>b>>c;
    node* node1=new node(a);
    node* node2=new node(b);
    node* node3=new node(c);
    node1->next=node2;
    node1->next->next=node3;
    node1->next->next->next=NULL;
    node* head=node1;
    traverse(head);// for traversing the list
    // for inserting the node at head
    int d;
    cout<<"Enter data for head: ";
    cin>>d;
    insertAtHead(head,d);
    traverse(head);
    // for inserting the node in middle
    int m,n;
    cout<<"Enter data for Middle: ";
    cin>>m;
    cout<<"Enter position: ";
    cin>>n;
    insertAtMiddle(head,m,n);
    traverse(head);
    // for inserting the node at end
    int e;
    cout<<"Enter data for End: ";
    cin>>e;
    insertAtEnd(head,e);
    traverse(head);
}