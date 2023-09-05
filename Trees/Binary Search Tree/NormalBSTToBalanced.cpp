#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left)
            delete left;
        if (right)
            delete right;
    }
};
void inOrder(TreeNode *root, vector<int> &inOrderValues)
{
    if (root == NULL)
        return;
    inOrder(root->left, inOrderValues);
    inOrderValues.push_back(root->data);
    inOrder(root->right, inOrderValues);
}

TreeNode *inorderToBST(vector<int> &inOrderValues, int s, int e)
{
    if (s > e)
        return NULL;

    int mid = (s + e) / 2;
    TreeNode *root = new TreeNode(inOrderValues[mid]);
    root->left = inorderToBST(inOrderValues, s, mid - 1);
    root->right = inorderToBST(inOrderValues, mid + 1, e);
    return root;
}

TreeNode *balancedBst(TreeNode *root)
{
    vector<int> inOrderValues;
    inOrder(root, inOrderValues);

    return inorderToBST(inOrderValues, 0, inOrderValues.size() - 1);
}

int main(){
    return 0;
}