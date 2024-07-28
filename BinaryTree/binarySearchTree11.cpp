#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* right,  *left;
    node(int data){
        this->data=data;
        right=NULL;
        left=NULL;
    }
};
void levelOrderTravesal(node* root){
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
node* binarySearchTree(node* root, int value){
    if(root==NULL){
        root=new node(value);
        return root;
    }
    else{
        if(root->data<value){
            root->right=binarySearchTree(root->right,value);
        }
        else{   //(root->data<value)
            root->left=binarySearchTree(root->left,value);
        }
    }
    return root;
}
node* takeInput(node* &root){
    int data;
    cout<<"Enter data: ";
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
void searchInBST(node* root, int value){
    if(root==NULL){
        cout<<"Value not found in BST: ";
        return;
    }
    else if(root->data==value){
        cout<<"Value found in BST: ";
        return;
    }
    else if(root->data<value){
        return searchInBST(root->right,value);
    }
    else{
        return searchInBST(root->left,value);
    }
}
int main(){
    node* root=NULL;
    takeInput(root);
    cout<<"levelOrder Traversal: "<<endl;
    levelOrderTravesal(root);
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
}