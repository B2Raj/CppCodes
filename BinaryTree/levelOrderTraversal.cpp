#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    node* left;
    node* right;
    int data;
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
    cout<<"Enter data for inserting in left of: "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data for inserting in right: "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}
void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);   // separator
    while(!q.empty()){
        node *temp=q.front();
        q.pop();
        if(temp==NULL){  // purana level complete traversal ho chuka hai
            cout<<endl;
            if(!q.empty()){// queue still has some child node
              q.push(NULL);  
            }
        }
        else{
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
            }
        }
    }
}
int main(){
    node* root=NULL;
    // creating tree
    root=buildTree(root);
    // level order
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<"Printing the level order traversal: "<<endl;
    levelOrderTraversal(root);
}