#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
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
    cout<<"Null"<<endl;
}
void insertAtHead(node* &head, int value){
    node* temp=head;
    node* newNode=new node(value);
    if(head==NULL){
        head=newNode;
        return;
    }
    newNode->next=head;
    head=newNode;
    newNode->prev=NULL;
}
void insertAtEnd(node* &head,int value){
    node* temp=head;
    node* newNode=new node(value);
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;
    newNode->next=NULL;
}
void insertAtMiddle(node* &head,int value,int position){
    if(position==1){
        insertAtHead(head,value);
        return;
    }
    node* temp=head;
    node* newNode=new node(value);
    int count=1;
    while(count<(position-1)){
        temp=temp->next;
        count++;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    newNode->prev=temp;
}
int main(){
    int a,b,c;
    cout<<"Enter data for node: ";
    cin>>a>>b>>c;
    node* node1=new node(a);
    node* node2=new node(b);
    node* node3=new node(c);
    node1->next=node2;
    node2->next=node3;
    node3->next=NULL;
    node1->prev=NULL;
    node2->prev=node1;
    node3->prev=node2;
    node* head=node1;
    traverse(head);
    int x;
    cout<<"Enter data for insert at head: ";
    cin>>x;
    insertAtHead(head,x);
    traverse(head);
    int y;
    cout<<"Enter a data for insert at End: ";
    cin>>y;
    insertAtEnd(head,y);
    traverse(head);
    int z,p;
    cout<<"Enter data for Middle position: ";
    cin>>z;
    cout<<"Enter position: ";
    cin>>p;
    insertAtMiddle(head,z,p);
    traverse(head);
return 0;
}