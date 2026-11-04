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

vector<int> zigzagTraversal(Node *root)
{
    vector<int> ans;

    // concept: level order traversal + leftToRightDirection flag
    if(!root )return ans; 

    queue<Node*>q; 
    q.push(root ); 
    bool leftToRigthDirection = true; 

    while(!q.empty()){
        int n = q.size();
        vector<int>temp;
        for(int i=0;i<n;i++){
            Node* frontNode = q.front(); 
            q.pop(); 
            temp.push_back(frontNode->data);

            if(frontNode->left){
                q.push(frontNode->left); 
            }

            if(frontNode->right){
                q.push(frontNode->right);
            }
        }

        if(!leftToRigthDirection){
            // reverse the order 
            reverse(temp.begin(),temp.end());
        }

        for(auto i: temp)ans.push_back(i);
        // step2: change direction -> update the flag 
        leftToRigthDirection = !leftToRigthDirection;


    }


    return ans;
}
int main()
{

    cout << "Zig -Zag traversal" << endl;
}