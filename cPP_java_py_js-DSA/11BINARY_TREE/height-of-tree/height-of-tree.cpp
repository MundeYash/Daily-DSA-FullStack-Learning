#include <bits/stdc++.h>
#include "../../0commonFunctions/printComplexity.h"
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



// function for build tree 
Node* buildTree(Node* root ){
    int data; 
    cout<<"Enter data ";
    cin>> data;
    
    
    if(data ==-1 ){ 
        return NULL;
    }
    root = new Node(data);
    cout<<"Enter data for left child of "<<root->data<<endl;
    root->left = buildTree(root->left); 
    cout<<"Enter data for right child"<<root->data<<endl;
    root->right = buildTree(root->right);
    return root;
}
// height of binary tree 

int heightOfTree(Node* root ){
    if(!root ){
        return 0;
    }
    int leftSubTreeHeight = heightOfTree(root->left);
    int rightSubTreeHeight = heightOfTree(root->right);
    return (max(leftSubTreeHeight,rightSubTreeHeight)+1 );
}

int main()
{
    Node* root = NULL ; 
    root =buildTree(root);
    cout<<"Height of tree is "<<heightOfTree(root)<<endl;



    return 0;
}