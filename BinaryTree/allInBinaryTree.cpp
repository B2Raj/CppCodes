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
void inOrderTraversal(node* root){
    if(root==NULL){
        return;
    }
    else{
        inOrderTraversal(root->left);
        cout<<root->data<<" ";
        inOrderTraversal(root->right);
    }
}
void preOrderTraversal(node* root){
    if(root==NULL){
        return;
    }
    else{
        cout<<root->data<<" ";
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}
void postOrderTraversal(node* root){
    if(root==NULL){
        return;
    }
    else{
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        cout<<root->data<<" ";
    }
}
int main(){
    node* root=NULL;
    root=buildTree(root);
    cout<<"Printing LevelOrder Traversal: "<<endl;
    levelOrderTraversal(root);
    cout<<"Inorder Travesal: ";
    inOrderTraversal(root);
    cout<<endl<<"PostOrder Traversal: ";
    postOrderTraversal(root);
    cout<<endl<<"PreOrder Traversal: ";
    preOrderTraversal(root);
return 0;
}