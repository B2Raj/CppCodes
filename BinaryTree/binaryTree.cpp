#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data=data;
        this->right=NULL;
        this->left=NULL;
    }
};
node *buildTree(node* tree){
    cout<<"Enter data for root: "<<endl;
    int data;
    cin>>data;
    node *root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter data for insert at left of: "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data for insert at right of: "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}
void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left){
            q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
int main(){
    node* root=NULL;
    root=buildTree(root);
    //  level order
    cout<<"Printing the level order traversal: "<<endl;
    levelOrderTraversal(root);
}