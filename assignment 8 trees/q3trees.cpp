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


int minDepth(Node* root) {
    if (root == NULL)
        return 0;   // empty tree

    // If left child is NULL, you MUST go to right child
    if (root->left == NULL)
        return 1 + minDepth(root->right);

    // If right child is NULL, you MUST go to left child
    if (root->right == NULL)
        return 1 + minDepth(root->left);

    // If both children exist, take the minimum of two depths
    int leftDepth = minDepth(root->left);
    int rightDepth = minDepth(root->right);

    return 1 + min(leftDepth, rightDepth);
}

int maxDepth(Node* root) {
    if (root == NULL)
        return 0;

    return 1 + max(maxDepth(root->left), maxDepth(root->right));
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

    cout << " the maximum depth is ::  " << maxDepth(root) << endl ;
    cout << " the minimum depth is ::  " << minDepth(root) << endl ; 
    return 0;
}
