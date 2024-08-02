#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
// ----> function for traverse the list
void traverse(node* head){      // constructor
    node* temp=head;
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    while(temp!=head);
    cout<<endl;
}
// ----> function for insert node at Head
void insertNodeAtHead(node* &head,int value){
    node* temp=head;
    node* tail=head;
    node* newNode=new node(value);
    if(head==NULL){
        head=newNode;
        newNode->next=newNode;
        return;
    }
    while(tail->next!=head){
        tail=tail->next;
    }
    newNode->next=head;
    head=newNode;
    tail->next=newNode;
}
// ----> function for insert node at End
void insertNodeAtEnd(node* &head,int value){
    node* temp=head;
    node* tail=head;
    node* newNode=new node(value);
    if(temp==NULL){
        temp=newNode;
        newNode->next=newNode;
        return;
    }
    while(tail->next!=head){
        tail=tail->next;
    }
    tail->next=newNode;
    newNode->next=head;
}
// ----> function for insert node at Middle
void insertNodeAtMiddle(node* &head,int value,int posi){
    node* temp=head;
    node* newNode=new node(value);
    if(head==NULL){
        head=newNode;
        newNode->next=head;
        return;
    }
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
}
// ----> function for delete the head node
void deleteNodeAtHead(node* &head){
    node* temp=head;
    node* tail=head;
    if(head==NULL){
        return;
    }
    while(tail->next!=head){
        tail=tail->next;
    }
    head=head->next;
    tail->next=temp->next;
    delete(temp);
}
// ----> function for delete node from End
void deleteNodeAtEnd(node* &head){
    node* temp=head;
    node* tail=head;
    if(temp==NULL){
        return;
    }
    if(temp->next==head){
        deleteNodeAtHead(head);
        return;
    }
    while(tail->next->next!=head){
        tail=tail->next;
    }
    node* lastNode=tail->next;
    tail->next=head;
    delete(lastNode);
}
// ----> functiion for delete node from Middle
void deleteNodeAtMiddle(node* &head,int posi){
    node* temp=head;
    int count=1;
    if(posi==1){
        deleteNodeAtHead(head);
        return;
    }
    while(count<(posi-1)){
        temp=temp->next;
        count++;
    }
    node* currentNode;
    currentNode=temp->next;
    temp->next=currentNode->next;
    delete(currentNode);
}
// ----> function for update the node
void updateNode(node* &head,int updatedValue,int posi){
    node* temp=head;
    int count=1;
    while(count<(posi)){
        temp=temp->next;
        count++;
    }
    temp->data=updatedValue;
}
int main(){
    int a,b,c,d;
    cout<<"Enter data for Circular LinkedList: ";
    cin>>a>>b>>c>>d;
    node* node1=new node(a);
    node* node2=new node(b);
    node* node3=new node(c);
    node* node4=new node(d);
    node1->next=node2;
    node2->next=node3;
    node3->next=node4;
    node4->next=node1;
    node* head=node1;
    cout<<"Defined Curcular LinkedList is: ";
    traverse(head);
    int x;
    cout<<"Enter data for insert node at Head: ";
    cin>>x;
    cout<<"List after data inserted at End: ";
    insertNodeAtHead(head,x);
    traverse(head);
    int y;
    cout<<"Enter data for insert node at End: ";
    cin>>y;
    cout<<"List after data inserted at End: ";
    insertNodeAtEnd(head,y);
    traverse(head);
    int z,p1;
    cout<<"Enter data for insert node at Middle: ";
    cin>>z;
    cout<<"Enter position: ";
    cin>>p1;
    cout<<"List after data inserted at Middle: ";
    insertNodeAtMiddle(head,z,p1);
    traverse(head);
    cout<<"List after Head is deleted: ";
    deleteNodeAtHead(head);
    traverse(head);
    cout<<"List after End is deleted: ";
    deleteNodeAtEnd(head);
    traverse(head);
    int p2;
    cout<<"Enter position to delete the node: ";
    cin>>p2;
    cout<<"List after some position is deleted: ";
    deleteNodeAtMiddle(head,p2);
    traverse(head);
    int x1,p3;
    cout<<"Enter data for update Node: ";
    cin>>x1;
    cout<<"Enter position: ";
    cin>>p3;
    cout<<"List after some Position is updated: ";
    updateNode(head,x1,p3);
    traverse(head);
return 0;
}