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
    int data;
    cout<<"Enter data: ";
    cin>>data;
    root=new node(data);
    if(data==-1){
        return nullptr;
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
    while(!q.empty()){
        node* temp=q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
    }
}
int main(){
    node* root=NULL;
    root=buildTree(root);
    cout<<"Level order traversal of the tree is: \n";
    levelOrderTraversal(root);
return 0;
}