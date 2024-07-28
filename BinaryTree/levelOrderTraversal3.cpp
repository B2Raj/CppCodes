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
    if(root==nullptr){
        return;
    }
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
int main(){
    node* root=NULL;
    root=buildTree(root);
    cout<<"LevelOrder traversal: "<<endl;
    levelOrderTraversal(root);
return 0;
}