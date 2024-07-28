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
node* buildTree(node* root){
    cout<<"Enter data: ";
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
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
    queue<node*> q;
    q.push(root);
    q.push(NULL);
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
            if(temp->right!=nullptr){
                q.push(temp->right);
            }
        }
    }
}
void inOrderTraversal(node* root){
    if(root==NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}
void preOrderTraversal(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
void postOrderTraversal(node* root){
    if(root==NULL){
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}
int main(){
    node* root=NULL;
    root=buildTree(root);
    cout<<"Level order Traversal of tree is: \n";
    levelOrderTraversal(root);
    cout<<"\n InOrder Traversal: \n";
    inOrderTraversal(root);
    cout<<"\n PreOrder Traversal: \n";
    preOrderTraversal(root);
    cout<<"\n PostOrder Traversal: \n";
    postOrderTraversal(root);
return 0;
}
//8 8 -1 7 9 -1 -1 7 13 -1 -1 -1 3 3 -1 -1 5 7 -1 5 -1 -1 9 7 -1 -1 -1