#include <bits/stdc++.h>
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

TreeNode *inOrderPredecessor(TreeNode *root, int data)
{
    TreeNode *predecessor = NULL;
    while (root != NULL)
    {
        if (data <= root->data)
        {
            root = root->left;
        }
        else
        {
            predecessor = root;
            root = root->right;
        }
    }
    return predecessor;
}

TreeNode *inOrderSuccessor(TreeNode *root, int data)
{
    TreeNode *successor = NULL;
    while (root != NULL)
    {
        if (data >= root->data)
            root = root->right;
        else
        {
            successor = root;
            root = root->left;
        }
    }
    return successor;
}

pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
    TreeNode *pred = inOrderPredecessor(root, key);
    TreeNode *succ = inOrderSuccessor(root, key);

    int pred_ans;
    int succ_ans;
    (pred != NULL) ? (pred_ans = pred->data) : (pred_ans = -1);
    (succ != NULL) ? (succ_ans = succ->data) : (succ_ans = -1);
    pair<int, int> ans = make_pair(pred_ans, succ_ans);
    return ans;
}

int main(){
    return 0;
}