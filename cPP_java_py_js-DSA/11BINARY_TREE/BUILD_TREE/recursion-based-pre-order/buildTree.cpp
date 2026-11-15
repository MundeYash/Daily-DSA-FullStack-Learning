#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *left;
    Node *right;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{

    int data;
    cout << "Enter data " << endl;
    cin >> data;
    if (data == -1)
        return NULL;
    root = new Node(data);
    cout << "Enter data for left child of " << root->data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for right child of " << root->data << endl;
    root->right = buildTree(root->right);

    return root;
}

int main()
{
    // input value 

    cout << "Method for building Tree" << endl;
    Node *root = NULL;
    root = buildTree(root);
    return 0;
}