#include<bits/stdc++.h>
using namespace std; 


class Node{
    public: 
        int data; 
        Node* left; 
        Node* right ; 

    // constructor 

    Node(int d ){
        this->data = d ;
        this->left = NULL ; 
        this->right = NULL ;
        
    }
};



//-------------------------------------------------------------------------------

void printLeftMost(Node* root , vector<int>&ans ){
    // concept : preorder 
    if(!root )return ; 

    // also skip leaf nodes
    if(!root->left && !root ->right)return ;
    ans.push_back(root->data); 
    if(root->left){
        printLeftMost(root->left,ans);
    }
    else{
        printLeftMost(root->right,ans);
    }

    return;
    
}

void printLeafNodes(Node* root , vector<int>&ans ){
    if(!root)return ; 
    // leaf node condition 
    if(!root->left && !root ->right ){
        ans.push_back(root->data);
    }
    printLeafNodes(root->left,ans); 
    printLeafNodes(root->right,ans);
    return ;
    
}
void printRightMost(Node* root , vector<int>&ans ){
    if(!root)return ; 
    // also skip leaf nodes
    if(!root->left && !root ->right)return ;
    if(root->right ){
        printRightMost(root->right,ans);
    }
    else{
        printRightMost(root->left,ans);
    }
    ans.push_back(root->data);
    return;
    
}
vector<int> printBoundaryTraversal(Node* root ){
    // following anti-clockwise approach 
    vector<int> ans; 
    if(!root )return ans; 
    // step1 : print LeftMost boundary 
    printLeftMost(root,ans);

    // step2 : print leftsubtree leaf nodes 
    printLeafNodes(root->left,ans);

    // step3 : print rightsubtree leaf node 
    printLeafNodes(root->right,ans);

    // step4: print rightmost boundary nodes in bottom to oder 
    printRightMost(root,ans);

    return ans;
    
}
int main (){

    return 0;
}