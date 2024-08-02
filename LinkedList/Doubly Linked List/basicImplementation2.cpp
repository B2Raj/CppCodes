#include<iostream>
using namespace std;
struct node{
    public:
    int data;
    node *next, *prev;
    node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};
// for forward traversing
void forwardTraversal(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"<->";
        temp=temp->next;
    }
    cout<<"Null";
    cout<<endl;
}
// for inserting node at head
void insertAtHead(node* &head, int value){
    node* newNode=new node(value);
    if(head==NULL){
        head=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    newNode->prev=NULL;
    head=newNode;
}
// for inserting node at middle
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
    temp->next->prev=newNode;
    newNode->prev=temp;
    temp->next=newNode;
}
// for inserting at end
void insertAtEnd(node* &head, int value){
    node* temp=head;
    node* newNode=new node(value);
    if(head==NULL){
        head=newNode; 
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;
    newNode->next=NULL;
}
// backward traversal
void backwardTraversal(node* head){
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    while(temp!=NULL){
        cout<<temp->data<<"<->";
        temp=temp->prev;
    }
    cout<<"NULL"<<endl;
}
// for deleting the node from head
void deleteAtHead(node* &head){
    if(head->next==NULL){
        delete(head);
        return;
    }
    node* temp=head;
    head=head->next;
    head->prev=NULL;
    delete(temp);
}
// for deleting the node from end
void deleteAtEnd(node* &head){
    node* temp=head;
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    node* lastNode=temp->next;
    temp->next=NULL;
    delete(lastNode);
}
// for deleting the node from Middle
void deleteAtMiddle(node* &head, int position){
    node* temp=head;
    if(head==NULL){
        return;
    }
    if(position==1){
        deleteAtHead(head);
        return;
    }
//-----> we can use both the loops for traversing
    for (int i=1; i<(position-1); i++){
        temp=temp->next;
    }
    // int count=1;
    // while(count<(position-1)){
    //     temp=temp->next;
    //     count++;
    // }
    node* currentNode=temp->next;
    temp->next=currentNode->next;
    if(currentNode->next!=NULL){
        currentNode->next->prev=temp;
    }
    delete(currentNode);
}
int main(){
    int a,b,c;
    cout<<"Enter data for linkedList: ";
    cin>>a>>b>>c;
    node* node1=new node(a);
    node* node2=new node(b);
    node* node3=new node(c);
    node1->next=node2;
  node1->prev=NULL;
    node2->next=node3;
    node2->prev=node1;
   node3->next=NULL;
    node3->prev=node2;
    node* head=node1;
    cout<<"Forward traversal: ";
    forwardTraversal(head);
    cout<<"Backword Traversal: ";
    backwardTraversal(head);
    int x;
    cout<<"Enter data for insert at head: ";
    cin>>x;
    insertAtHead(head,x);
    forwardTraversal(head);
    int y,p;
    cout<<"Enter data for insert at Middle: ";
    cin>>y;
    cout<<"Enter position: ";
    cin>>p;
    insertAtMiddle(head,y,p);
    forwardTraversal(head);
    int e;
    cout<<"Enter data for insert at End: ";
    cin>>e;
    cout<<"Doubly linkedList after end is delete: ";
    insertAtEnd(head,e);
    forwardTraversal(head);
    cout<<"LinkedList after Head is deleted: ";
    deleteAtHead(head);
    forwardTraversal(head);
    cout<<"LinkedList after End is deleted: ";
    deleteAtEnd(head);
    forwardTraversal(head);
    int p1;
    cout<<"Enter position for delete the node: ";
    cin>>p1;
    cout<<"linkedList after Middle is deleted: ";
    deleteAtMiddle(head,p1);
    forwardTraversal(head);
return 0;
}