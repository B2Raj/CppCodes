#include<iostream>
#include<queue>
using namespace std;
struct node{
    public:
    int data;
    node* right;
    node* left;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
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
                q.push(nullptr);
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
node* binarySearchTree(node* root,int value){
    if(root==NULL){
        root=new node(value);
        return root;
    }
    if(root->data<value){
        root->right=binarySearchTree(root->right,value);
    }
    else{   //(root->data>value)
        root->left=binarySearchTree(root->left,value);
    }
    return root;
}
void takeInput(node* &root){
    int data;
    cout<<"----> Enter data for BST: ";
    cin>>data;
    while(data!=-1){
        root=binarySearchTree(root,data);
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
void postOrder(node* root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
void inOrder(node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void searchInBST(node* root,int x){
    if(root==NULL){
        cout<<"---> "<<x<<" is not found in BST: ";
        return;
    }
    else if(root->data==x){
        cout<<"---> "<<x<<" is found in BST: ";
        return;
    }
    else if(root->data<x){
        return searchInBST(root->right,x);
    }
    else{   //(root->data>x)
        return searchInBST(root->left,x);
    }
}
node* maxValue(node* root){
    node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}
node* minValue(node* root){
    node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}
int main(){
    node* root=NULL;
    takeInput(root);
    cout<<"Level Order of BST: "<<endl;
    levelOrderTraversal(root);
    cout<<"--> preOrder: ";
    preOrder(root);
    cout<<endl;
    cout<<"--> postOrder: ";
    postOrder(root);
    cout<<endl;
    cout<<"--> inOrder: ";
    inOrder(root);
    cout<<endl;
    int x;
    cout<<"Enter data for search in BST: ";
    cin>>x;
    searchInBST(root, x);
    cout<<endl;
    cout<<"Min value of BST is: "<<minValue(root)->data;
    cout<<endl;
    cout<<"Max value of BST is: "<<maxValue(root)->data;
return 0;
}