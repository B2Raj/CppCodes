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
        this->right=nullptr;
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
        if(temp==nullptr){
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
node* insertBinaryTree(node* root, int value){
    if(root==NULL){
        root=new node(value);
        return root;
    }
    if(value<root->data){
        root->left=insertBinaryTree(root->left,value);
    }
    else{
        root->right=insertBinaryTree(root->right,value);
    }
    return root;
}
void takeInput(node* &root){
    int data;
    cout<<"Enter data: ";
    cin>>data;
    while(data!=-1){
        root=insertBinaryTree(root,data);
        cin>>data;
    }
}
void preOrder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void postOrder(node* root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
void searchInBST(node* root,int x){
    if(root==NULL){
        cout<<"Node is not present.";
    }
    else if(root->data==x){
        cout<<"Node is present in BST.";
    }
    else if(root->data>x){
        return searchInBST(root->left,x);
    }
    else{   //(root->data<x)
        return searchInBST(root->right,x);
    }
}
node* minValue(node* root){
    node* temp=root;
    while(temp->left!=nullptr){
        temp=temp->left;
    }
    return temp;
}
node* maxValue(node* root){
    node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}
int main(){
    node* root=NULL;
    takeInput(root);
    cout<<"Printing the levelOrder of BST: ";
    levelOrderTraversal(root);
    cout<<"InorderTraversal: \n";
    inOrder(root);
    cout<<"\n preOrder Traversal: \n";
    preOrder(root);
    cout<<"\n postOrder Traversal: \n";
    postOrder(root);
    int x;
    cout<<"\n Enter data for search in BST: ";
    cin>>x;
    searchInBST(root,x);
    cout<<endl;
    cout<<"Max value of BST is: "<<maxValue(root)->data<<endl;
    cout<<"Min value of BST is: "<<minValue(root)->data<<endl;
return 0;
}