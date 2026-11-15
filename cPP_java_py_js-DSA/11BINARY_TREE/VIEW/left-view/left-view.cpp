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

    // take input of root node
    int data;
    cout << "Enter the data" << endl;
    cin >> data;
    if(data ==-1 )return NULL ;

    root = new Node(data);

    cout << "Enter the data for left child of " << root->data << endl;
    root->left = buildTree(root->left);

    cout << "Enter the data for right child of " << root->data << endl;
    root->right = buildTree(root->right);

    return root;
}

// APPROACH: unordered map based approach + and non updating value
vector<int> leftView(Node *root)
{
    vector<int> ans;
    if (!root)
        return ans;

    unordered_map<int, int> mp; // level no and first time encounted element
    queue<pair<Node *, int>> q;
    q.push(make_pair(root, 0));

    while (!q.empty())
    {
        int n = q.size();

        for (int i = 0; i < n; i++)
        {
            pair<Node *, int> frontValue= q.front();
            q.pop();
            Node *frontNode = frontValue.first;
            int currentLevel = frontValue.second;

            if (mp.find(currentLevel) == mp.end())
                mp[currentLevel] = frontNode->data;

            if (frontNode->left)
            {
                q.push(make_pair(frontNode->left, currentLevel + 1));
            }

            if (frontNode->right)
            {
                q.push(make_pair(frontNode->right, currentLevel + 1));
            }
        }
    }

    for (auto i : mp)
    {
        cout << "Level = " << i.first << "= " << i.second << "| ";
        ans.push_back(i.second);
    }

    return ans;
}
int main()
{
    Node *root = NULL;
    root = buildTree(root);
    vector<int> ans;
    ans = leftView(root);

    return 0;
}