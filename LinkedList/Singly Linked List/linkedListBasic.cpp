#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
int main(){
    struct node *a, *b, *c;
    a=(struct node*)malloc(sizeof(struct node));
    b=(struct node*)malloc(sizeof(struct node));
    c=(struct node*)malloc(sizeof(struct node));
    a->next=b;
    b->data=4;
    a->data=3;
    b->next=c;
    c->data=7;
    a->next->next->next=NULL;
    cout<<a->data<<"\n"<<b->data<<"\n"<<c->data;
    cout<<endl;
    a->next->next->data=6;
    cout<<a->next->next->data;
    return 0;
}