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
// function for traversing the linked list
void traverse(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"null"<<endl;
}
//  function for inserting node at Head
void insertAtHead(node* &head, int value){
    node* newNode=new node(value);
    newNode->next=head;
    head=newNode;
}
// function for inserting node at End
void insertAtEnd(node* &head, int value){
    node* newNode=new node(value);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
void insertAtMiddle(node* &head,int value,int position){
    if(position==1){
        insertAtHead(head, value);
        return;
    }
    node* newNode=new node(value);
    node* temp=head; // temp is for previous node
    int count=1;
    while(count <(position-1)){
        temp=temp->next;
        count++;
    }
    // temp(prev.)is pointing to the node that should come before newNode
    newNode->next=temp->next;
    temp->next=newNode;
}
int main(){
    int n,m;
    cout<<"Enter data: ";
    cin>>n>>m;
    node* node1=new node(n);
    node* node2=new node(m);
    node1->next=node2;
    node1->next->next=NULL;
    node* head=node1;
    traverse(head);
    int a;
    cout<<"Enter a data to insert node At Head: ";
    cin>>a;
    insertAtHead(head,a);
    traverse(head);
    int b;
    cout<<"Enter a data to insert node at End: ";
    cin>>b;
    insertAtEnd(head,b);
    traverse(head);
    int c,p;
    cout<<"Enter data to insert in the Middle.";
    cin>>c;
    cout<<"Enter position.";
    cin>>p;
    insertAtMiddle(head, c,p);
    traverse(head);
    return 0;
}