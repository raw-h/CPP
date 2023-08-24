#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left, * right;
};

vector<int> diagonal(Node *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        while (temp)
        {
            ans.push_back(temp->data);
            if (temp->left)
                q.push(temp->left);
            temp = temp->right;
        }
    }
    return ans;
}

int main(){
    return 0;
}