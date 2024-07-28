#include<iostream>
using namespace std;
struct node{
    public:
        int data;
        node* left;
        node* right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
void preOrder(struct node* root){
    
}
int main(){
    node* root=NULL;
    root=new node(4);
    root->left= new node(3);
    root->right=new node(1);
    root->left->left=new node(5);
    root->right->right=new node(7);

return 0;
}