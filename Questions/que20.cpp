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
// Delete a key from the BST
Node* deleteNode(Node* root, int key) {
    if (!root)
        return root;
    if (key < root->key)
        root->left = deleteNode(root->left, key);
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
    else {
        if (!root->left) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (!root->right) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* temp = root->right;
        while (temp->left)
            temp = temp->left;

        root->key = temp->key;
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
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
     cout << "Inorder traversal before deletion: ";
    inorder(root);
    cout << endl;
    int keyToDelete = 30;
    root = deleteNode(root, keyToDelete);
    cout << "Inorder traversal after deleting key " << keyToDelete << ": ";
    inorder(root);
    return 0;
}