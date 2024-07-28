#include<iostream>
#include<queue>
using namespace std;
struct node{
    public:
    int data;
    node* right,*left;
    node(int data){
        this->data=data;
        right=nullptr;
        left=NULL;
    }
};
void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
    }
}
int main(){
    node* root=NULL;

}