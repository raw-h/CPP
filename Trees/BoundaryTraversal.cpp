#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
};

void traversalLeft(Node *root, vector<int> &ans)
{
    if (root == NULL || (root->left == NULL && root->right == NULL))
        return;

    ans.push_back(root->data);
    if (root->left)
        traversalLeft(root->left, ans);
    else
        traversalLeft(root->right, ans);
}

void traversalRight(Node *root, vector<int> &ans)
{
    if (root == NULL || (root->left == NULL && root->right == NULL))
        return;

    if (root->right)
        traversalRight(root->right, ans);
    else
        traversalRight(root->left, ans);
    ans.push_back(root->data);
}

void traversalLeaf(Node *root, vector<int> &ans)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
    {
        ans.push_back(root->data);
        return;
    }
    traversalLeaf(root->left, ans);
    traversalLeaf(root->right, ans);
}

vector<int> boundary(Node *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;

    ans.push_back(root->data);

    traversalLeft(root->left, ans);

    traversalLeaf(root->left, ans);
    traversalLeaf(root->right, ans);

    traversalRight(root->right, ans);

    return ans;
}

int main(){
    return 0;
}