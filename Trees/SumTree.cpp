#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

pair<bool, int> isSumTreeFaster(Node *root)
{
    if (root == NULL)
    {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }
    if (root->left == NULL && root->right == NULL)
    {
        pair<bool, int> p = make_pair(true, root->data);
        return p;
    }

    pair<bool, int> left = isSumTreeFaster(root->left);
    pair<bool, int> right = isSumTreeFaster(root->right);

    bool leftAns = left.first;
    bool rightAns = right.first;

    bool condn = root->data == left.second + right.second;

    pair<bool, int> ans;
    if (condn && leftAns && rightAns)
    {
        ans.first = true;
        ans.second = 2 * root->data;
    }
    else
    {
        ans.first = false;
    }
    return ans;
}

bool isSumTree(Node *root)
{
    isSumTreeFaster(root).first;
}

int main(){
    return 0;
}