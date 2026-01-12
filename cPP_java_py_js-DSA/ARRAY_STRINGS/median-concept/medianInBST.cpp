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

// helper function for brute force approach
void inorderTraversal(Node *root, vector<int> &ans)
{
    // time :O(n), space :stack space
    if (!root)
        return;
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
        ans = arr[(n / 2 - 1)];
    }
    else
    {
        ans = arr[(n + 1) / 2];
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
int main()
{
    Node *root = NULL;

    return 0;
}

// count approach ,without storing array elements is pending
/*
https://www.geeksforgeeks.org/problems/median-of-bst/1

*/