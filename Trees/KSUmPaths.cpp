#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

void k_paths(Node *root, int k, unordered_map<int, int> &p, int sum, int &res)
{
    if (root)
    {
        if (sum + root->data == k)
            res++;

        res += p[sum + root->data - k];
        p[sum + root->data]++;
        k_paths(root->left, k, p, sum + root->data, res);
        k_paths(root->right, k, p, sum + root->data, res);
        p[sum + root->data]--;
    }
}

int sumK(Node *root, int k)
{
    int res = 0;
    unordered_map<int, int> p;
    k_paths(root, k, p, 0, res);
    return res;
}

int main(){
    return 0;
}