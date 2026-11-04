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

vector<int> reverseLevelOrderTraversal(Node *root)
{
    vector<int> ans;

    // concept: level order traversal + (bottom-to-top) + left-to-right order + first rigth child is process due to maintainence
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

            // right child is processed first
            if (frontNode->right)
            {
                q.push(frontNode->right);
            }

            if (frontNode->left)
            {
                q.push(frontNode->left);
            }
        }

        // step2: reverse the order (left to right order )
        reverse(temp.begin(), temp.end());

        for (auto i : temp)
            ans.push_back(i);
    }

    return ans;
}
int main()
{

    cout << "Reverse Level order traversal" << endl;
}