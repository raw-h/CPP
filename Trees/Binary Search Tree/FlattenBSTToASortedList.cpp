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

TreeNode *flatten(TreeNode *root)
{
    vector<int> inOrderValues;
    inOrder(root, inOrderValues);
    int n = inOrderValues.size();

    TreeNode *root2 = new TreeNode(inOrderValues[0]);

    TreeNode *curr = root2;
    for (int i = 1; i < n; i++)
    {
        TreeNode *temp = new TreeNode(inOrderValues[i]);
        curr->right = temp;
        curr->left = NULL;
        curr = temp;
    }
    curr->left = NULL;
    curr->right = NULL;

    return root2;
}

int main(){
    return 0;
}