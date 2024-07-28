#include<iostream>
#include<queue>
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
void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(nullptr);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
    }
}
node* binarySearchTree(node* root, int data){
    if(root==NULL){
        root=new node(data);
        return root;
    }
    if(data<root->data){
        root->left=binarySearchTree(root->left,data);
    }
    else{   //(data>root->data)
        root->right=binarySearchTree(root->right,data);
    }
    return root;
}
void takeInput(node* &root){
    cout<<"Enter data for create BST: "<<endl;
    int data;
    cin>>data;
    while(data!=-1){
        root=binarySearchTree(root,data);
        cin>>data;
    }
}
void inOrder(node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void preOrder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(node* root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
int main(){
    node* root=NULL;
    takeInput(root);
    cout<<"Printing level order Traversal: "<<endl;
    levelOrderTraversal(root);
    cout<<"\n InorderTraversal: \n";
    inOrder(root);
    cout<<"\n preOrder Traversal: \n";
    preOrder(root);
    cout<<"\n postOrder Traversal: \n";
    postOrder(root);
return 0;
}