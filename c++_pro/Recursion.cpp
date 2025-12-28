#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        data = d;
        left = nullptr;
        right = nullptr;
    }
};


void display(Node* root) {
    if (!root) return;

    display(root->left);
    display(root->right);
    cout << root->data << " ";
}

int main() {

    Node* root = new Node(5);

    root->left = new Node(4);
    root->left->left = new Node(1);
    root->left->left->left = new Node(12);
    root->left->left->left->left = new Node(2);
    root->left->left->left->right = new Node(3);

    root->right = new Node(7);
    root->right->right = new Node(6);
    root->right->right->right = new Node(8);

    root->right->right->left = new Node(10);
    root->right->right->left->left = new Node(9);
    root->right->right->left->right = new Node(13);

    cout << "Tree created successfully\n";
    display(root);

    return 0;
}
