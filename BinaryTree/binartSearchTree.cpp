#include<iostream>
using namespace std;
struct node{
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
node* buildBinarySearchTree(node* root, int value){
    if(root==NULL){
        return new node(value);
    }
    if(value<root->data){
        root->left=buildBinarySearchTree(root->left,value);
    }
    else{   // (value>root->data)
        root->right=buildBinarySearchTree(root->right,value);
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
    root=buildBinarySearchTree(root,5);        buildBinarySearchTree(root,1);
    buildBinarySearchTree(root,3);
    buildBinarySearchTree(root,4);
    buildBinarySearchTree(root,2);
    buildBinarySearchTree(root,7);
    cout<<"inOrder Traversal: ";
    inOrderTraversal(root);
    cout<<endl;
return 0;
}