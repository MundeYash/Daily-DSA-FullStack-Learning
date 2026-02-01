#include <bits/stdc++.h>
using namespace std;

// Problem Statement: Given a binary search tree and we have find the median of the bst values

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // default constructor
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
/*----------------------------------------------------------------------------------*/
int countNodes(Node *root)
{
    // base case
    if (!root)
        return 0;
    int leftNode = countNodes(root->left);
    int rightNode = countNodes(root->right);
    return (leftNode + rightNode + 1); // to include current node
}
void solve(Node *root, int pos, int counter, int &ans)
{
    if (!root)
        return;

    solve(root->left, pos, counter, ans);
    // work
    counter++;
    if (counter == pos)
    {
        ans = root->data;
        return;
    }
    solve(root->right, pos, counter, ans);
}
int findMedianInBST_Approach2_Optimised(Node *root)
{
    // concept : Inorder Traversal , Count Nodes and Pointer
    //  Time : O(n), space :O(1)

    // step 1 : calculate No of nodes
    int n = countNodes(root);

    int pos = (n % 2 == 0) ? (n / 2) : (n + 1) / 2;

    // step 2 : // find the position of counter for median values (while traversal inorder wise )
    int ans = -1;
    int counter = 0;
    solve(root, pos, counter, ans);
    return ans;
}

/*----------------------------------------------------------------------------------*/
// helper function for brute force approach
void inorderTraversal(Node *root, vector<int> &ans)
{
    // time :O(n), space :stack space
    if (!root)
        return;

    // L N R
    inorderTraversal(root->left, ans);
    ans.push_back(root->data);
    inorderTraversal(root->right, ans);
}

int findMedianInSortedArray(vector<int> arr)
{

    // time taken here : O(1), space :O(1)
    int n = arr.size();
    int ans = -1;
    if (n % 2 == 0)
    {
        // even values
        ans = arr[(n / 2 - 1)]; // index is used (-1 )
    }
    else
    {
        ans = arr[(n + 1) / 2 - 1]; // index is used (-1)
    }
    return ans;
}
int findMedianInBST_Approach1_Brute(Node *root)
{

    // concept : inorder traversal store and apply median concept
    // time : O(n), space :O(n)

    // step1 : find inorder-traversal and store in array

    vector<int> temp;
    inorderTraversal(root, temp);

    // step2: apply median logic for sorted array
    return findMedianInSortedArray(temp);
}

/*----------------------------------------------------------------------------------*/

int main()
{
    Node *root = NULL;
    cout<< "this is working";

    // logic is implemented but tree creation and nodes addition is pending

    return 0;
}

// count approach ,without storing array elements is pending
/*
https://www.geeksforgeeks.org/problems/median-of-bst/1

*/