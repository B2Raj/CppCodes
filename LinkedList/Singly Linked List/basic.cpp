#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
int main(){
    struct node *a, *b;
    a=(struct node *)malloc(sizeof(struct node));
    b=(struct node *)malloc(sizeof(struct node));
    a->next=b;
    a->next->data=2;
    a->data=4;
    a->next->next=0;
    
    return 0;
}