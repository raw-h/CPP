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

TreeNode *LCAinaBST(TreeNode *root, TreeNode *P, TreeNode *Q)
{
    if (root == NULL)
        return NULL;

    // if(root->data > P->data && root->data > Q->data){
    //     return LCAinaBST(root->left, P, Q);
    // }
    // else if(root->data < P->data && root->data < Q->data){
    //     return LCAinaBST(root->right, P, Q);
    // }
    // return root;

    while (root != NULL)
    {
        if (root->data > P->data && root->data > Q->data)
        {
            root = root->left;
        }
        else if (root->data < P->data && root->data < Q->data)
        {
            root = root->right;
        }
        else
            return root;
    }
}

int main(){
    return 0;
}