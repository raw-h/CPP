#include<bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode *left, *right;
    TreeNode() : data(0), left(NULL), right(NULL) {}
    TreeNode(int x) : data(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};

class info
{
public:
    int mini, maxi, size;
    bool isBST;
};

info solve(TreeNode *root, int &ans)
{
    if (root == NULL)
    {
        return {INT_MAX, INT_MIN, 0, true};
    }

    info left = solve(root->left, ans);
    info right = solve(root->right, ans);

    info currNode;
    currNode.size = left.size + right.size + 1;
    currNode.mini = min(root->data, left.mini);
    currNode.maxi = max(root->data, right.maxi);

    if (left.isBST && right.isBST && (root->data > left.maxi && root->data < right.mini))
        currNode.isBST = true;
    else
        currNode.isBST = false;
    if (currNode.isBST)
    {
        ans = max(ans, currNode.size);
    }
    return currNode;
}
int largestBST(TreeNode *root)
{
    int maxSize = 0;
    info temp = solve(root, maxSize);
    return maxSize;
}

int main(){
    return 0;
}