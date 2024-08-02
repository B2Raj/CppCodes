#include<iostream>
using namespace std;
struct node{
    int _data;
    node* next;
};
int main(){
   cout<<"Enter 1 for Insert in empty list. \n";
   cout<<"Enter 2 for Insert at begining."<<endl;
   cout<<"Enter 3 for Insert at End. "<<endl;
 cout<<"Enter 4 for Insert at nth posi.. "<<endl;
    cout<<"Enter 5 for Display. "<<endl;
   cout<<"Enter 6 for END the program. \n"<<endl;
   cout<<"------Enter Your Choice------"<<endl;
   int ch;
   cin>>ch;
   switch(ch){
    case 1:
    if(start!=NULL){
        cout<<"List is not Empty. \n";
        break;
        }
    else
        cout<<"Enter Element: ";
        int data;
        cin>>data;
        emptyList(start, data);
        start=emptyList(start, data);
        break;
    case 2:
        cout<<"Enter elements: ";
        cin>>data;
        atBegining(start, data);
        start=atBegining(start,data);
        break;
    case 3:
        cout<<"Enter Element: ";
        cin>>data;
        start=atEnd(start,data);
        break;
    case 4:
        cout<<"Enter Element: ";
        cin>>data;
        int position;
        cout<<"Enter Position. ";
        cin>>position;
        start=nPosition(start,data,position);
        break;
    case 5:
        display(start);
   }
struct node* emptyList(struct node* start, int data){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp=_data->data;
    temp->next=start;
    start=temp;
    return start;
   }
struct node* atBegining(struct node* start, int data){
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->_data=data;
    temp->next=start;
    start=temp;
    return start;
  }
struct node* atEnd(struct node* start, int data){
        struct node *p, *temp;
        temp=(struct node*)malloc(sizeof(struct node));
        temp->_data=data;
        p->start;
        while(p->link!=NULL){
            p=p->next;
        }
            p->next=temp;
            temp->next=NULL;
        return start;
    }
struct node* nPosition(struct node* start, int data, int position){
        int i;
        struct node* temp*p;
        temp=(struct node*)malloc(sizeof(struct node));
        temp->_data=data;
        if(position==1){
            temp->next=start;
            start=temp;
            return start;
        }
        p=start;
        for (i=1; i<position-1 && p!=NULL; i++){
            p=p->next;
        }
        if(p==NULL){
            cout<<"Enter is less than Entered.\n";
        }
        else
            temp->next=p->next;
            p->next=temp;
    }
    return start;
}