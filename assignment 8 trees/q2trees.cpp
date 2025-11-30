#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};


Node* createNode(int value) {
    Node* n = new Node();
    n->data = value;
    n->left = n->right = NULL;
    return n;
}

// Insert
Node* insert(Node* root, int value) {
    Node* newNode = createNode(value);

    // If tree is empty
    if (root == NULL)
        return newNode;

    Node* current = root;
    Node* parent = NULL;

    // Traverse until we find the correct position
    while (current != NULL) {
        parent = current;

        if (value < current->data)
            current = current->left;      // go left
        else
            current = current->right;     // go right
    }

    // Attach new node to the correct parent side
    if (value < parent->data)
        parent->left = newNode;
    else
        parent->right = newNode;

    return root;   // root doesn't change
}


// Recursive Search
Node* searchBST(Node* root, int key) {
    if (root == NULL || root->data == key)
        return root;

    if (key < root->data)
        return searchBST(root->left, key);
    else
        return searchBST(root->right, key);
}

int findMax(Node* root) {
    if (root == NULL)
        return -1;   // or any value you want for empty tree

    Node* current = root;

    // Max is at the extreme right
    while (current->right != NULL) {
        current = current->right;
    }

    return current->data;
}


int findMin(Node* root) {
    if (root == NULL)
        return -1;   

    if (root->left == NULL)
        return root->data;   

    return findMin(root->left);
}

int main() {
    Node* root = NULL;

    root = insert(root, 51);
    root = insert(root, 32);
    root = insert(root, 71);
    root = insert(root, 22);
    root = insert(root, 42);
    root = insert(root, 67);
    root = insert(root, 85);

    int key = 67;

    Node* result = searchBST(root, key);

    if (result)
        cout << "Item found"<< endl;
    else
        cout << "Item not found" << endl;
    cout << " maximum element is :: " << findMax(root) << endl;
    cout << " minimum element is :: " << findMin(root) << endl;
    return 0;
}
