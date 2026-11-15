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

vector<vector<int>> levelOrderTraversal(Node *root)
{
    vector<vector<int>> ans;

    // concept: queue and .size() for completion of each level

    if (!root)
        return ans;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int n = q.size();
        vector<int> temp;
        for (int i = 0; i < n; i++)
        {
            Node *frontNode = q.front();
            q.pop();
            temp.push_back(frontNode->data);

            if (frontNode->left)
            {
                q.push(frontNode->left);
            }

            if (frontNode->right)
            {
                q.push(frontNode->right);
            }
        }

        
            ans.push_back(temp);
    }

    return ans;
}

Node* buildTree(Node* &root ){
    int data; 
    cout<<"Enter data : ";
    cin>> data; 
    if(data ==-1){
        return NULL ; 
    }
    root = new Node(data); 
    root->left= buildTree(root->left);
    root->right = buildTree(root->right);
    return root ;

    
}

void printTraversal(vector<vector<int>>order){
    int level=0;
    for(auto i: order){
        cout<<"Level No: "<<level<<" ";
        for(auto j: i)cout<<j<<", ";
        cout<<endl;
    }
    return ;
}
int main()
{
    Node* root = NULL ; 
    buildTree(root);
    vector<vector<int>>order = levelOrderTraversal(root);
    printTraversal(order);

    cout << "Level order traversal" << endl;
}