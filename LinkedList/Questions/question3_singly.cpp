/*Given 2 linkedLists, tell if they are equal or not. Two linkedLists are equal if they have the same data and the arrangement of data is also the same.*/

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
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null";
    cout<<endl;
}
void insertNodeAtEnd(node* &head,int value){
    node* newNode=new node(value);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=NULL;
}
bool sameOrNot(node* head1,node* head2){
    while(head1!=NULL && head2!=NULL){
        if(head1->data!=head2->data){
            return false;
        }
        head1=head1->next;
        head2-head2->next;
    }
    return (head1==NULL && head2==NULL);
}
int main(){
    node* head1=NULL;
    insertNodeAtEnd(head1,1);
    insertNodeAtEnd(head1,2);
    insertNodeAtEnd(head1,3);
    insertNodeAtEnd(head1,4);
    insertNodeAtEnd(head1,5);
    insertNodeAtEnd(head1,6);
    traverse(head1);
    node* head2=NULL;
    insertNodeAtEnd(head2,1);
    insertNodeAtEnd(head2,2);
    insertNodeAtEnd(head2,3);
    insertNodeAtEnd(head2,4);
    insertNodeAtEnd(head2,5);
    insertNodeAtEnd(head2,6);
    traverse(head2);
    cout<<sameOrNot(head1,head2)<<endl;
    return 0;
}