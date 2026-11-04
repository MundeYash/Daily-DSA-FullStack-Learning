#include<bits/stdc++.h>
using namespace std ; 


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


Node* buildTree(Node* root ){
    //8 3 1 -1 -1 6 4 -1 -1 7 -1 -1 10 -1 14 13 -1 -1 -1

    int data; 
    cout<<"Enter data"<<endl;
    cin>> data; 

    if(data ==-1 ){
        return NULL;
    }
    root = new Node(data);

    cout<<"Enter left child of "<<root->data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter right child of "<<root->data<<endl;
    root->right = buildTree(root->right);

    return root ;





}

vector<int>rightView_approach1(Node* root ){
    // concept : level-order-traversal  + map + (update only first encountered node )
    // time : O(N), space : O(N-> for storing map values )
    vector<int>ans ; 

    if(!root )return ans;
    unordered_map<int,int>mp ; // level no and first tree value 
    
    queue<pair<Node*,int>>q; 
    q.push(make_pair(root,0));
    while (!q.empty()){
        int n = q.size(); 
        for(int i=0;i<n;i++){

            pair<Node*,int> frontValue = q.front(); 
            q.pop(); 
            Node* frontNode = frontValue.first;
            int currentLevel = frontValue.second;
            mp[currentLevel] = frontNode->data;


            // work for child nodes 
            if(frontNode->left){

                q.push(make_pair(frontNode->left,currentLevel + 1));
            }
            if(frontNode->right){
                q.push(make_pair(frontNode->right,currentLevel+1));
            }
            

        }
    }
    // populating and copying the values 
    for(auto i: mp ){
        cout<<"Level "<<i.first<<"= "<<i.second<<"| ";
        ans.push_back(i.second);
    }
    return ans;
}

vector<int>rightView_approach2(Node*root ){
    // concept: level-order-traversal + index 0 of each level 
    vector<int>ans;
    return ans;
}


void printArray(vector<int>arr){
    for(auto i: arr ){
        cout<<i<<", " ;
    }
    cout<<endl;
}

int main (){

    Node* root = NULL;
    root = buildTree(root);

    vector<int> ans  = rightView_approach1(root);
    printArray(ans);

    


    return  0 ;
}