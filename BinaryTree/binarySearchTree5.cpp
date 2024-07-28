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
            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
    }
}
node* insertBSt(node* root, int data){ 
    if(root==NULL){     // base case
        root=new node(data);
        return root;
    }
    if(data>root->data){
        root->right=insertBSt(root->right,data);
    }
    else{   //(data<root->data)
        root->left=insertBSt(root->left,data);
    }
    return root; 
}
void takeInput(node* &root){
    cout<<"Enter data for create BST: "<<endl;
    int data;
    cin>>data;
    while(data!=-1){
        root=insertBSt(root,data);
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
    cout<<"Printing the BST: "<<endl;
    levelOrderTraversal(root);
    cout<<"InOrder Traversal: \n";
    inOrder(root);
    cout<<"\n postOrder Traversal: \n";
    postOrder(root);
    cout<<"\n preOrder Traversal: \n";
    preOrder(root);
return 0; 
}