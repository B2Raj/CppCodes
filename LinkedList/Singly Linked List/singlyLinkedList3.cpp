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
void traverse(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}
void insertNodeAtHead(node* &head,int value){
    node* temp=head;
    node* newNode=new node(value);
    if(temp==NULL){
        return;
    }
    newNode->next=head;
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
    temp->next=newNode;
}
void insertNodeAtEnd(node* &head,int value){
    node* temp=head;
    node* newNode=new node(value);
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=NULL;
}
void deleteNodeAtHead(node* head){
    node* temp=head;
    if(head==NULL){
        return;
    }
    head=head->next;
    delete(temp);
}
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
    delete(currentNode);
}
void deleteNodeAtEnd(node* head){
    node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    node* lastNode=tail->next;
    tail->next=NULL;
    delete(lastNode);
}
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
    cout<<"Enter data for LinkedList: ";
    cin>>a>>b>>c;
    node* node1=new node(a);
    node* node2=new node(b);
    node* node3=new node(c);
    node1->next=node2;
    node2->next=node3;
    node3->next=NULL;
    node* head=node1;
    cout<<"Current LinkedList is: ";
    traverse(head);
    int x;
    cout<<"Enter data for insert node at Head: ";
    cin>>x;
    cout<<"List after node is inserted at Head: ";
    insertNodeAtHead(head,x);
    traverse(head);
    int y,p1;
    cout<<"Enter data for insert node at Middle: ";
    cin>>y;
    cout<<"Enter position: ";
    cin>>p1;
    cout<<"List after node is inserted at Middle: ";
    insertNodeAtMiddle(head,y,p1);
    traverse(head);
    int z;
    cout<<"Enter data for insert node at End: ";
    cin>>z;
    cout<<"List after node is inserted at End: ";
    insertNodeAtEnd(head,z);
    traverse(head);
    cout<<"List after Head is deleted: ";
    deleteNodeAtHead(head);
    traverse(head);
    int p3;
    cout<<"Enter position to delete the node: ";
    cin>>p3;
    cout<<"List after Middle node is deleted: ";
    deleteNodeAtMiddle(head,p3);
    traverse(head);
    cout<<"List after End is deleted: ";
    deleteNodeAtEnd(head);
    traverse(head);
    int x1,p2;
    cout<<"Enter data for update the node: ";
    cin>>x1;
    cout<<"Enter position: ";
    cin>>p2;
    cout<<"List after Position node is updated: ";
    updateNode(head,x1,p2);
    traverse(head);
return 0;
}