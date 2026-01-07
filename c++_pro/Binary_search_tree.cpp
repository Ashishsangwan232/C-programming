#include <bits/stdc++.h>
using namespace std;

struct Bnode {
    int data;
    Bnode* left;
    Bnode* right;
};

void add_node(Bnode** root, int value) {
    Bnode* newnode = new Bnode;
    newnode->data = value;
    newnode->left = nullptr;
    newnode->right = nullptr;

    if (*root == nullptr) {
        *root = newnode;
        return;
    }

    Bnode* node = *root;

    while (true) {
        if (value < node->data) {
            if (node->left == nullptr) {
                node->left = newnode;
                return;
            }
            node = node->left;
        } else {
            if (node->right == nullptr) {
                node->right = newnode;
                return;
            }
            node = node->right;
        }
    }
}

Bnode* findMin(Bnode* root) {
    while (root && root->left)
        root = root->left;
    return root;
}

Bnode* deleteNode(Bnode* root, int value) {
    if (!root) return nullptr;

    if (value < root->data) {
        root->left = deleteNode(root->left, value);
    }
    else if (value > root->data) {
        root->right = deleteNode(root->right, value);
    }
    else {
        if (root->left == nullptr && root->right == nullptr) {
            delete root;
            return nullptr;
        }
        else if (root->left == nullptr) {
            Bnode* temp = root->right;
            delete root;
            return temp;
        }

        else if (root->right == nullptr) {
            Bnode* temp = root->left;
            delete root;
            return temp;
        }
        
        else {
            Bnode* temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}

void inorder(Bnode* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Bnode* root = nullptr;
    int n, tp;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> tp;
        add_node(&root, tp);
    }

    cout << "Inorder before deletion:\n";
    inorder(root);

    int value;
    cout << "\nEnter value to delete: ";
    cin >> value;

    root = deleteNode(root, value);

    cout << "Inorder after deletion:\n";
    inorder(root);

    return 0;
}
