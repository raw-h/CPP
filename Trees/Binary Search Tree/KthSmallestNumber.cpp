#include <bits/stdc++.h>
using namespace std;

class BinaryTreeNode
{
public:
    int data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

    BinaryTreeNode(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

int solve(BinaryTreeNode *root, int k, int &i)
{
    if (root == NULL)
        return -1;

    int left = solve(root->left, k, i);

    if (left != -1)
    {
        return left;
    }
    i++;
    if (i == k)
    {
        return root->data;
    }

    return solve(root->right, k, i);
}

int kthSmallest(BinaryTreeNode *root, int k)
{
    int i = 0;
    int ans = solve(root, k, i);
    return ans;
}

int main()
{
    return 0;
}