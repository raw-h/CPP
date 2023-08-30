#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

void createMapping(int in[], int n, map<int, int> &mapping)
{
    for (int i = 0; i < n; i++)
    {
        mapping[in[i]] = i;
    }
}

Node *solve(int in[], int pre[], int n, map<int, int> &mapping, int &index, int inorStart, int inorEnd)
{
    if (index >= n || inorStart > inorEnd)
        return NULL;

    int element = pre[index++];
    Node *root = new Node(element);

    int position = mapping[element];
    if (position < inorStart || position > inorEnd)
    {
        for (int i = inorStart; i <= inorEnd; i++)
        {
            if (in[i] == element)
            {
                position = i;
                break;
            }
        }
    }
    root->left = solve(in, pre, n, mapping, index, inorStart, position - 1);
    root->right = solve(in, pre, n, mapping, index, position + 1, inorEnd);

    return root;
}

Node *buildTree(int in[], int pre[], int n)
{
    map<int, int> mapping;
    createMapping(in, n, mapping);
    int preOrderIndex = 0;
    // Node * ans = solve(in, pre, n, preOrderIndex, 0, n-1);
    Node *ans = solve(in, pre, n, mapping, preOrderIndex, 0, n - 1);
    return ans;
}

int main()
{
    return 0;
}