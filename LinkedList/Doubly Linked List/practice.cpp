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
void traverse(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"--";
        temp=temp->next;
    }
    cout<<"Null"<<endl;
}
void insertNodeAtHead(node* &head, int value){
    node* temp=head;
    node* newNode=new node(value);
    if(head==NULL){
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    newNode->prev=NULL;
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
    temp->next->prev=newNode;
    temp->next=newNode;
    newNode->prev=temp;
}
void insertNodeAtEnd(node* &head,int value){
    node* tail=head;
    node* newNode=new node(value);
    while(tail->next!=NULL){
        tail=tail->next;
    }
    tail->next=newNode;
    newNode->prev=tail;
    newNode->next=NULL;
}
void deleteNodeAtHead(node* &head){
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
    currentNode->next->prev=temp;
    delete(currentNode);
}
void deleteNodeAtEnd(node* head){
    node* tail=head;
    if(tail->next==NULL){
        deleteNodeAtHead(head);
        return;
    }
    while(tail->next->next!=NULL){
        tail=tail->next;
    }
    node* lastNode=tail->next;
    tail->next=NULL;
    delete(tail);
}
int main(){
    int a,b,c;
    cout<<"Enter data for doublyList: ";
    cin>>a>>b>>c;
    node* node1=new node(a);
    node* node2=new node(b);
    node* node3=new node(c);
    node1->next=node2;
    node2->next=node3;
    node3->next=nullptr;
    node3->prev=node2;
    node2->prev=node1;
    node1->prev=nullptr;
    node* head=node1;
    cout<<"Your List is: ";
    traverse(head);
    int x;
    cout<<"Enter data for insert node at Head: ";
    cin>>x;
    insertNodeAtHead(head,x);
    traverse(head);
    int y,p1;
    cout<<"Enter data for insert node at Middle: ";
    cin>>y;
    cout<<p1;
    cout<<"Enter position: ";
    cin>>p1;
    cout<<"List after Middle node is inserted: ";
    insertNodeAtMiddle(head,y,p1);
    traverse(head);
    int z;
    cout<<"Enter data for insert node at End: ";
    cin>>z;
    cout<<"List after End node in inserted: ";
    insertNodeAtEnd(head,z);
    traverse(head);
    cout<<"List after Head is deleted: ";
    deleteNodeAtHead(head);
    traverse(head);
    int p2;
    cout<<"Enter posiition to delete the node: ";
    cin>>p2;
    cout<<"List after Middle is deleted: ";
    deleteNodeAtMiddle(head,p2);
    traverse(head);
    cout<<"List after End is deleted: ";
    deleteNodeAtEnd(head);
    traverse(head);
return 0;
}