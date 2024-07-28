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
node* buildTree(node* root){
    int data;
    cout<<"Enter data: ";
    cin>>data;
    root=new node(data);
    if(data=-1){
        return;
    }
    else{
        cout<<"Enter data for left of "<<data<<endl;
        root->left=buildTree(root->left);
        cout<<"Enter data for right of "<<data<<endl;
        root->right=buildTree(root->right);
    }
    return root;
}
void levelOrderTraversal(node* root){
    
}
int main(){
    node* root=NULL;
    // creating tree
    root=buildTree(root);
return 0;
}