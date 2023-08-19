#include<bits/stdc++.h>
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

pair<bool, int> isSelfBalanced(Node *root)
{
    if (root == NULL)
    {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }

    pair<bool, int> left = isSelfBalanced(root->left);
    pair<bool, int> right = isSelfBalanced(root->right);

    bool leftAns = left.first;
    bool rightAns = right.first;

    bool diff = abs(left.second - right.second) <= 1;

    pair<bool, int> ans;
    ans.second = max(left.second, right.second) + 1;

    if (leftAns && rightAns && diff)
        ans.first = true;
    else
        ans.first = false;
    return ans;
}

bool isBalanced(Node *root)
{
    return isSelfBalanced(root).first;
}

int main(){
    return 0;
}