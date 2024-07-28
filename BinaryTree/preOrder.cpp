#include<iostream>
using namespace std;
struct binaryTree{
    public:
    binaryTree* left;
    binaryTree* right;
    int data;
    binaryTree(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
    void preOrder(binaryTree *root){
        if(root){
            cout<<root->data;
            preOrder(root->left);
            preOrder(root->right);
        }
    }
    void inOrder(binaryTree *root){
        if(root){
            inOrder(root->left);
            cout<<root->data;
            inOrder(root->right);
        }
    }
    void postOrder(binaryTree *root){
        if(root){
            postOrder(root->left);
            postOrder(root->right);
            cout<<root->data;
        }
    }
};
int main(){
    binaryTree root(12); 
}