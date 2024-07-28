#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* right;
    node* left;
    node(int data){
        this->right=NULL;
        this->left=NULL;
        this->data=data;
    }
};
node* binarySearchTree(node* root,int value){
    if(root==nullptr){
        return new node(value);
    }
    if(value<root->data){
        root->left=binarySearchTree(root->left,value);
    }
    else{  // (value>root->data);
       root->right=binarySearchTree(root->right,value);
    }
}