#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Function to create a new node
Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

// Function to insert a value into the BST
Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return createNode(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

// Function to calculate the height of the BST
int getHeight(Node* root) {
    if (root == nullptr) {
        return 0;
    }

    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);

    return max(leftHeight, rightHeight) + 1;
}

int main() {
    int n;
    cout << "Enter the number of nodes in the BST: ";
    cin >> n;

    Node* root = nullptr;

    cout << "Enter the values of nodes, separated by spaces: ";
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        if (i == 0) {
            root = createNode(value);
        } else {
            insert(root, value);
        }
    }

    int maxHeight = getHeight(root);

    cout << "Maximum height of the BST: " << maxHeight << endl;

    return 0;
}
