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

void solve(TreeNode *root, vector<int> &inord_root)
{
    if (root == NULL)
        return;

    solve(root->left, inord_root);
    inord_root.push_back(root->data);
    solve(root->right, inord_root);
}

void mergeArrays(vector<int> &arr1, vector<int> &arr2, vector<int> &ans_array)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] < arr2[j])
            ans_array[k++] = arr1[i++];
        if (arr2[j] <= arr1[i])
            ans_array[k++] = arr2[j++];
    }

    while (i < arr1.size())
        ans_array[k++] = arr1[i++];

    while (j < arr2.size())
        ans_array[k++] = arr2[j++];
}

vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
{
    vector<int> inord_root1;
    solve(root1, inord_root1);

    vector<int> inord_root2;
    solve(root2, inord_root2);

    vector<int> ans_array(inord_root1.size() + inord_root2.size());
    mergeArrays(inord_root1, inord_root2, ans_array);
    return ans_array;
}

int main()
{
    return 0;
}