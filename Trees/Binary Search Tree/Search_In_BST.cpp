#include <bits/stdc++.h>
using namespace std;

class BinaryTreeNode
{
public:
    int data;
    BinaryTreeNode *left, *right;
    BinaryTreeNode() : data(0), left(NULL), right(NULL) {}
    BinaryTreeNode(int x) : data(x), left(NULL), right(NULL) {}
    BinaryTreeNode(int x, BinaryTreeNode *left, BinaryTreeNode *right) : data(x), left(left), right(right) {}
};

bool searchInBST(BinaryTreeNode *root, int x)
{
    BinaryTreeNode *temp = root;
    while (temp != NULL)
    {
        if (temp->data == x)
            return true;
        else if (temp->data > x)
            temp = temp->left;
        else
            temp = temp->right;
    }
    return false;
}

int main(){
    return 0;
}