#include<iostream>
using namespace std;
struct node{
    public:
    int data;
    node* next;
    node(int data){     // constructor
        this->data=data;
        this->next=NULL;
    }
};
// ----> this will traverse the node of linkedList and also print the list
void traverse(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}
// ----> this function is for inserting the node at head
void insertNodeAtHead(node* &head,int value){
    if(head==NULL){
        return;
    }
    node* newNode=new node(value);
    newNode->next=head;
    head=newNode;
}
// ----> this function is for inserting node at Ene
void insertNodeAtEnd(node* &head,int value){
    node* temp=head;
    node* newNode=new node(value);
    if(head==NULL){
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=NULL;
}
// ----> this function for inserting node at Middle
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
// ----> this function is for delete node from Head
void deleteNodeAtHead(node* &head){
    node* temp=head;
    if(head==NULL){
        return;
    }
    head=temp->next;
    delete(temp);
}
// ----> this function is for delete node from End
void deleteNodeAtEnd(node* &head){
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
    delete(lastNode);
}
// ----> this function for delete node from Middle
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
// ----> this function is for updating the node
void updateNode(node* &head,int updatedValue,int posi){
    node* temp=head;
    int count=1;
    while(count<posi){
        temp=temp->next;
        count++;
    }
    temp->data=updatedValue;
}
int main(){
    int a,b,c,d;
    cout<<"Enter data for linkedList: ";
    cin>>a>>b>>c>>d;
    node* node1=new node(a);
    node* node2=new node(b);
    node* node3=new node(c);
    node* node4=new node(d);
    node1->next=node2;
    node2->next=node3;
    node3->next=node4;
    node4->next=NULL;
    node* head=node1;
    cout<<"Your singlyLinkedList is: ";
    traverse(head);
    int x;
    cout<<"Enter data for insert node at Head: ";
    cin>>x;
    cout<<"LinkedList after HEAD is inserte: ";
    insertNodeAtHead(head,x);
    traverse(head);
    int y;
    cout<<"Enter data for insert node at End: ";
    cin>>y;
    cout<<"LinkedList after END is inserted: ";
    insertNodeAtEnd(head,y);
    traverse(head);
    int z,p1;
    cout<<"Enter data for insert node at Middle: ";
    cin>>z;
    cout<<"Enter position: ";
    cin>>p1;
    cout<<"LinkedList after MIDDLE is inserted: ";
    insertNodeAtMiddle(head,z,p1);
    traverse(head);
    cout<<"----List after deletion operation is applied----"<<endl;
    cout<<"List after Head is deleted: ";
    deleteNodeAtHead(head);
    traverse(head);
    cout<<"List after End is deleted: ";
    deleteNodeAtEnd(head);
    traverse(head);
    int p2;
    cout<<"Enter position to be delete: ";
    cin>>p2;
    cout<<"List after Middle is deleted: ";
    deleteNodeAtMiddle(head,p2);
    traverse(head);
    int z1,p3;
    cout<<"Enter data for update the node: ";
    cin>>z1;
    cout<<"Enter position: ";
    cin>>p3;
    cout<<"List after update a node: ";
    updateNode(head,z1,p3);
    traverse(head);
    cout<<"<----Requred LinkedList is---->"<<endl;
    traverse(head);
return 0;
}