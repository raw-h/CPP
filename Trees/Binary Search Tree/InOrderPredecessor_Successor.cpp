#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insertIntoBST(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if (data > root->data)
    {
        root->right = insertIntoBST(root->right, data);
    }

    if (data < root->data)
    {
        root->left = insertIntoBST(root->left, data);
    }
    return root;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

Node *inOrderSuccessor(Node *root, int data)
{
    Node *successor = NULL;
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

Node *inOrderPredecessor(Node *root, int data)
{
    Node *predecessor = NULL;
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
        // 100 80 90 70 85 50 110 105 140 120 150 -1
    }
    return predecessor;
}

int main()
{
    Node *root = NULL;

    takeInput(root);
    Node *ans = inOrderSuccessor(root, 50);
    (ans != NULL) ? (cout << "Predecessor is: " << ans->data << endl) : (cout << "NULL" << endl);

    Node *ans2 = inOrderPredecessor(root, 50);
    (ans2 != NULL) ? (cout << "Predecessor is: " << ans2->data << endl) : (cout << "NULL" << endl);

    return 0;
}