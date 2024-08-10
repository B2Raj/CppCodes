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
void traverse(node* &head){
    node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"null"<<endl;
}
void insertNodeAtHead(node* &head, int value){
    node* temp=head;
    node* newNode=new node(value);
    newNode->next=head;
    head=newNode;
}
void insertNodeAtMiddle(node*&head,int value,int posi){
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
void insertNodeAtEnd(node* &head, int value){
    node* temp=head;
    node* newNode=new node(value);
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=NULL;
}
void deleteNodeAtHead(node* head){
    if(head==NULL){
        return;
    }
    node* temp=head;
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
    node* temp=head;
    if(temp==NULL){
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
    delete (lastNode);
}
void updateNode(node* &head,int posi,int updatedValue){
    node* temp=head;
    int count=1;
    while(count<(posi)){
        temp=temp->next;
        count++;
    }
    temp->data=updatedValue;
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
    node* head=node1;
    cout<<"Your linkedList is: ";
    traverse(head);
    int x;
    cout<<"Enter data for insert node at head: ";
    cin>>x;
    insertNodeAtHead(head,x);
    traverse(head);
    int y,p1;
    cout<<"Enter data for insert node at Middle: ";
    cin>>y;
    cout<<"Enter position: ";
    cin>>p1;
    insertNodeAtMiddle(head,y,p1);
    traverse(head);
    int z;
    cout<<"Enter data for insert node at End: ";
    cin>>z;
    insertNodeAtEnd(head,z);
    traverse(head);
    cout<<"List after head is deleted: ";
    deleteNodeAtHead(head);
    traverse(head);
    int p2;
    cout<<"Ente position to be deleted: ";
    cin>>p2;
    cout<<"List after middle is deleted: ";
    deleteNodeAtMiddle(head,p2);
    traverse(head);
    cout<<"List after End is deleted: ";
    deleteNodeAtEnd(head);
    traverse(head);
    cout<<"Final linkedList is; ";
    traverse(head);
    int z1,p3;
    cout<<"Enter value for update a node: ";
    cin>>z1;
    cout<<"Enter position: ";
    cin>>p3;
    updateNode(head,z1,p3);
    traverse(head);
return 0;
}