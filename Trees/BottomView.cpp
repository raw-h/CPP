#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

vector<int> topView(Node *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;

    map<int, int> topNode;
    queue<pair<Node *, int>> q;
    q.push(make_pair(root, 0));

    while (!q.empty())
    {
        pair<Node *, int> temp = q.front();
        q.pop();

        Node *frontNode = temp.first;
        int lvl = temp.second;
        topNode[lvl] = frontNode->data;

        if (frontNode->left)
            q.push(make_pair(frontNode->left, lvl - 1));
        if (frontNode->right)
            q.push(make_pair(frontNode->right, lvl + 1));
    }
    for (auto i : topNode)
        ans.push_back(i.second);

    return ans;
}

int main()
{
    return 0;
}