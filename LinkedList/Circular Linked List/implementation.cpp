#include<iostream>
using namespace std;
struct node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void traverse(node* head){
    node* temp=head;
    do{
        cout<<temp->data<<"--";
        temp=temp->next;
    }
    while(temp!=head);
}
void insertNodeAtHead(node* &head,int value){
    node* temp=head;
    node* newNode=new node(value);
    if(head==NULL){
        head=newNode;
        head->next=head;
        return;
    }
    while(temp->next!=head){
        temp=temp->next;
    }
    newNode->next=head;
    temp->next=newNode;
    head=newNode;
}
void insertNodeAtEnd(node* &head,int value){
    node* temp=head;
    node* newNode=new node(value);
    if(head==NULL){
        head=newNode;
        head->next=head;
        return;
    }
    if(temp->next==head){
        head->next=newNode;
        newNode->next=head;
        head=newNode;
        return;
    }
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=head;
}
void insertNodeAtMiddle(node* &head,int value,int posi){
    node* temp=head;
    node* newNode=new node(value);
    if(posi==1){
        insertNodeAtHead(head,value);
        return;
    }
    if(head==NULL){
        head=newNode;
        head->next=newNode;
        return;
    }
    int count=1;
    while(count<(posi-1)){
        temp=temp->next;
        count++;
    }
    node* currentNode=temp->next;
    newNode->next=currentNode;
    temp->next=newNode;
}
void deleteNodeAtHead(struct node* &head){
    node* temp=head;
    node* tail=head;
    if(head==NULL){
        return;
    }
    while(tail->next!=head){
        tail=tail->next;
    }
    tail->next=head->next;
    head=head->next;
    delete(temp);
}
void deleteNodeAtEnd(node* &head){
    node* temp=head;
    if(head==NULL){
        return;
    }
    if(head->next==head){
        delete(head);
        return;
    }
    while(temp->next->next!=head){
        temp=temp->next;
    }
    node* lastNode=temp->next;
    temp->next=head;
    delete(lastNode);
}
void deleteNodeAtMiddle(node* &head,int posi){
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
    delete(currentNode);
}
int main(){
    int a,b,c;
    cout<<"Enter data for circulat linkedList: ";
    cin>>a>>b>>c;
    node* node1=new node(a);
    node* node2=new node(b);
    node* node3=new node(c);
    node1->next=node2;
    node2->next=node3;
    node3->next=node1;
    node* head=node1;
    cout<<"Your circular linkedList is: ";
    traverse(head);
    cout<<endl;
    int x;
    cout<<"Enter data for insert node at head: ";
    cin>>x;
    insertNodeAtHead(head,x);
    traverse(head);
    cout<<endl;
    int e;
    cout<<"Enter data for insert node at end: ";
    cin>>e;
    insertNodeAtEnd(head,e);
    traverse(head);
    cout<<endl;
    int y,p1;
    cout<<"Enter data for insert node at Middle: ";
    cin>>y;
    cout<<"Enter position: ";
    cin>>p1;
    insertNodeAtMiddle(head,y,p1);
    traverse(head);
    cout<<endl;
    cout<<"List after head is deleted: ";
    deleteNodeAtHead(head);
    traverse(head);
    cout<<endl;
    cout<<"List after End is deleted: ";
    deleteNodeAtEnd(head);
    traverse(head);
    cout<<endl;
    int p2;
    cout<<"Enter position to delete the node: ";
    cin>>p2;
    deleteNodeAtMiddle(head,p2);
    traverse(head);
}