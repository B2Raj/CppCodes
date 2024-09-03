#include <iostream>
using namespace std;
// Define the BST node structure
struct Node {
    int key;
    Node* left;
    Node* right;
};
// Create a new node with the given key
Node* newNode(int key) {
    Node* temp = new Node;
    temp->key = key;
    temp->left = temp->right = nullptr;
    return temp;
}
// Insert a new key into the BST
Node* insert(Node* root, int key) {
    if (!root)
        return newNode(key);

    if (key < root->key)
        root->left = insert(root->left, key);
    else if (key > root->key)
        root->right = insert(root->right, key);

    return root;
}
// Perform inorder traversal of the BST
void inorder(Node* root) {
    if (!root)
        return;
    inorder(root->left);
    cout << root->key << " ";
    inorder(root->right);
}
// Perform preorder traversal of the BST
void preorder(Node* root) {
    if (!root)
        return;
    cout << root->key << " ";
    preorder(root->left);
    preorder(root->right);
}
// Perform postorder traversal of the BST
void postorder(Node* root) {
    if (!root)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->key << " ";
}
int main() {
    Node* root = nullptr;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;
    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;
    cout << "Postorder traversal: ";
    postorder(root);
    cout << endl;
    return 0;
}