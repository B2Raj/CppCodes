#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *left, *right;
    node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
// preorder traversal
void preOrderTraversal(struct node* node){
    if(node==NULL){
        return;
    }
    cout<<node->data<<"-->";
    preOrderTraversal(node->left);
    preOrderTraversal(node->right);
}
// postOrder traversal
void postOrderTraversal(struct node* node){
    if(node==NULL){
        return ;
    }
    postOrderTraversal(node->left);
    postOrderTraversal(node->right);
    cout<<node->data<<"-->";
}
// inorder traversal
void inOrderTraversal(struct node* node){
    if(node==NULL){
        return;
    }
    inOrderTraversal(node->left);
    cout<<node->data<<"-->";
    inOrderTraversal(node->right);
}
int main(){
    struct node* root=new node(1);
    root->left=new node(12);
    root->right=new node(9);
    root->left->left=new node(5);
    root->left->right=new node(6);
    cout<<"INORDER TRAVERSAL: ";
    inOrderTraversal(root);
    cout<<endl;
    cout<<"PREORDER TRAVERSAL: ";
    preOrderTraversal(root);
    cout<<endl;
    cout<<"POSTORDER TRAVERSAL: ";
    postOrderTraversal(root);
return 0;
}