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
        if (temp==NULL){
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
node* buildBinaryTree(node* root,int value){
    if(root==NULL){
        root=new node(value);
        return root;
    }
    if(value<root->data){
        root->left=buildBinaryTree(root->left,value);
    }
    else{   //(value>root->data)
        root->right=buildBinaryTree(root->right,value);
    }
    return root;
}
void takeInput(node* &root){
    int data;
    cout<<"Enter data: ";
    cin>>data;
    while(data!=-1){
        root=buildBinaryTree(root,data);
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
    if(root==nullptr){
        cout<<"-----> "<<x<<" is not in BST: ";
        return;
    }
    else if(root->data==x){
        cout<<"-----> "<<x<<" found in BST. ";
        return;
    }
    else if(root->data>x){
        return searchInBST(root->left,x);
    }
    else{
        return searchInBST(root->right,x);
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
    cout<<"Level order Traversal: ";
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
    cout<<"\n Max data of BST is: ";
    cout<<maxValue(root)->data;
    cout<<"\n Min data of BST is: ";
    cout<<minValue(root)->data;
return 0;
}