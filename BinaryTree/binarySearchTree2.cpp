#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* right;
    node* left;
    node(int data){
        this->data=data;
        this->right=NULL;
        this->left=NULL;
    }
};
node* binarySearchTree(node* root,int value){
    if(root==NULL){
        return new node(value);
    }
    if(value<root->data){
        root->left=binarySearchTree(root->left,value);
    }
    else{   //(value>root->data)
        root->right=binarySearchTree(root->right,value);
    }
    return root;
}
void inOrderTraversal(node* root){
    if(root==NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}
int main(){
    node* root=NULL;
    root=binarySearchTree(root,5);        
    binarySearchTree(root,2);
    binarySearchTree(root,8);
    binarySearchTree(root,3);
    binarySearchTree(root,1);
    binarySearchTree(root,11);
    binarySearchTree(root,9);
    cout<<"inOrder Traversal: ";
    inOrderTraversal(root);
return 0;
}