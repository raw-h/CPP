#include<bits/stdc++.h>
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
void postOrderTraversal(BinaryTreeNode *root, int &count)
{
    if (root == NULL)
        return;

    postOrderTraversal(root->left, count);
    postOrderTraversal(root->right, count);
    if (root->left == NULL && root->right == NULL)
        count++;
}

int noOfLeafNodes(BinaryTreeNode *root)
{
    int cnt = 0;
    postOrderTraversal(root, cnt);
    return cnt;
}

int main(){
    return 0;
}