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
    cout<<"Null"<<endl;
}
void insertAtHead(node* &head, int value){
    node* newNode=new node(value);
    node* temp=head;
    newNode->next=head;
    head=newNode;
}
void insertAtMiddle(node* &head, int value, int posi){
    node* newNode=new node(value);
    node* temp=head;
    int count=1;
    if(count<(posi-1)){
        temp=temp->next;
        count++;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}
void insertAtEnd(node* head, int value){
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
    traverse(head);
    int d;
    cout<<"Enter data for Head: ";
    cin>>d;
    insertAtHead(head, d);
    traverse(head);
    int m,n;
    cout<<"Enter data for Middle: ";
    cin>>m;
    cout<<"Enter position: ";
    cin>>n;
    insertAtMiddle(head,m,n);
    traverse(head);
    int e;
    cout<<"Enter data for End: ";
    cin>>e;
    insertAtEnd(head,e);
    traverse(head);
return 0;
}