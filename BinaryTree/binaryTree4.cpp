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
        this->left=NULL;
        this->right=NULL;
    }
};
node* buildTree(node* root){
    int data;
    cout<<"Enter data: ";
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
    if(root==NULL){
        return;
    }
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* node=q.front();
        q.pop();
        if(node!=NULL){
            cout<<node->data<<" ";
            if(node->left!=nullptr){
                q.push(node->left);
                if(node->right!=nullptr){
                    q.push(node->right);
                }
                else if(!q.empty())
                q.push(NULL);
            }
        }
    }
}
int main(){
    node* root=NULL;
    // creating a binary tree
    root=buildTree(root);
    levelOrderTraversal(root);
return 0;
}