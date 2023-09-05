#include <bits/stdc++.h>
using namespace std;

class BinaryTreeNode {
    public :
    int data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

    BinaryTreeNode(int data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }

};
void inOrder(BinaryTreeNode *root, vector<int> &inOrderValues)
{
    if (root == NULL)
        return;

    inOrder(root->left, inOrderValues);
    inOrderValues.push_back(root->data);
    inOrder(root->right, inOrderValues);
}
bool twoSumInBST(BinaryTreeNode *root, int target)
{
    vector<int> inOrderValues;
    inOrder(root, inOrderValues);
    int i = 0;
    int n = inOrderValues.size();
    int j = n - 1;

    while (i < j)
    {
        if ((inOrderValues[i] + inOrderValues[j]) == target)
            return true;
        else if ((inOrderValues[i] + inOrderValues[j]) > target)
            j--;
        else if ((inOrderValues[i] + inOrderValues[j]) < target)
            i++;
    }
    return false;
}

int main(){
    return 0;
}