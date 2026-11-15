#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
        int data ;
        Node* left; 
        Node* right;


    // default constructor 

    Node(int value ){
        this->data= value;
        this->left =NULL; 
        this->right = NULL;

    }
};

//Approach 1: inorder traversal of BST is sorted 

void inorderTraversal(Node* root,vector<int>&ans  ){
    // Left Node Right 
    if(!root ){
        return ; 
    }
    inorderTraversal(root->left,ans);
    ans.push_back(root->data);
    inorderTraversal(root->right,ans);

}
bool compareTraversal(vector<int>arr ){
    // check for sorted condition
    int n = arr.size(); 
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1])return false;
    }
    return true;
}


bool isBSTApproach1(Node* root ){
    // Time :O(n), space :O(n)-> for storing inorder traversal 

    // step1: store inorder traversal 
    vector<int>arr ; 
    inorderTraversal(root,arr);
    bool result = compareTraversal(arr);
    return result ;

}

// Approach 2: Postorder traversal and check current node condition + range based check and minimum maximum value creation 

bool isBstApproach2(Node* root ,int minValue, int maxValue ){

    // concept : post-order traversal and checking each node , TIME : O(n),space:O(N-> recursive stack space )
    if(!root)return true; 

    // check for current node range 
    if(root->data<= minValue || root->data>= maxValue )return false;

    return (isBstApproach2(root->left,minValue,root->data) && isBstApproach2(root->right,root->data,maxValue));

}

Node* createTree(Node* root ){

    //8 3 1 -1 -1 6 4 -1 -1 7 -1 -1 10 -1 14 13 -1 -1 -1

    int data; 
    cout<<"Enter data"<<endl;
    cin>> data; 

    if(data ==-1 ){
        return NULL;
    }
    root = new Node(data);

    cout<<"Enter left child of "<<root->data<<endl;
    root->left = createTree(root->left);
    cout<<"Enter right child of "<<root->data<<endl;
    root->right = createTree(root->right);

    return root ;


}

int main (){

    Node* root = NULL ;

    root = createTree(root);
    cout<<"Is BST "<<isBSTApproach1(root) <<endl;
    cout<<"Is BST "<<isBstApproach2(root,INT_MIN,INT_MAX)<<endl;
    
    cout<<"Is BST"<<endl;

    return 0 ;
}