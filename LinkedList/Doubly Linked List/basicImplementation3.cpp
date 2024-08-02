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
void forwardTraversal(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"<->";
        temp=temp->next;
    }
    cout<<"NULL";
}
void insertAtHead(node* &head, int value){
    node* newNode=new node(value);
    node* temp=head;
    head->prev=newNode;
    newNode->next=head;
    head=newNode;
}
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
    newNode->prev=temp;
    temp->next=newNode;
}
void insertAtEnd(node* &head, int value){
    node* newNode=new node(value);
    node* temp=head;
    if(head==NULL){
        head=newNode;
        return;
    }
    if(head->next==NULL){
        insertAtHead(head,value);
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
    if(head->next==NULL){
        delete(head);
        return;
    }
    node* temp=head;
    node* currentNode=head->next;
    currentNode->prev=NULL;
    delete(temp);
}
void deleteNodeAtMiddle(node* &head, int posi){
    node* temp=head;
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
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
    if(currentNode->next!=NULL){
        currentNode->next->prev=temp;
    }
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
    node* lastNode=temp->next;
    temp->next=NULL;
    delete(lastNode);
}
int main(){
    int a,b,c;
    cout<<"Enter data for LinkedList: ";
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
    forwardTraversal(head);
    cout<<endl;
    int d;
    cout<<"Enter data for insert at Head: ";
    cin>>d;
    cout<<"LinkedList After inserting Head: ";
    insertAtHead(head,d);
    forwardTraversal(head);
    cout<<endl;
    int f,p1;
    cout<<"Enter data for inserting at Middle: ";
    cin>>f;
    cout<<"Enter position: ";
    cin>>p1;
    cout<<"LinkedList After inserting at Middle: ";
    insertAtMiddle(head,f,p1);
    forwardTraversal(head);
    cout<<endl;
    int e;
    cout<<"Enter data for insert at End: ";
    cin>>e;
    cout<<"LinkedList After inserting End: ";
    insertAtEnd(head,e);
    forwardTraversal(head);
    cout<<endl;
    cout<<"LinkedList After Head is deleted: ";
    deleteNodeAtHead(head);
    forwardTraversal(head);
    cout<<endl;
    cout<<"LinkedList After End is deleted: ";
    deleteNodeAtEnd(head);
    forwardTraversal(head);
    cout<<endl;
    int p2;
    cout<<"Enter position to be delete from Middle: ";
    cin>>p2;
    cout<<"LinkedList After Middle is deleted: ";
    deleteNodeAtMiddle(head,p2);
    forwardTraversal(head);
return 0;
}