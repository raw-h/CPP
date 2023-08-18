#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    cout << "Enter data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
        return NULL;

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
                q.push(NULL);
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
}

void reverseLevelOrder(node *root)
{
    stack<node *> S;
    queue<node *> Q;
    Q.push(root);

    while (!Q.empty())
    {
        root = Q.front();
        Q.pop();
        S.push(root);

        if (root->right)
            Q.push(root->right);

        if (root->left)
            Q.push(root->left);
    }

    while (S.empty() == false)
    {
        root = S.top();
        cout << root->data << " ";
        S.pop();
    }
}

void inOrderTraversal(node *root)
{
    if (root == NULL)
        return;

    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

void inOrderTraversalIterative(node *root)
{
    stack<node *> s;
    while (true)
    {
        if (root != NULL)
        {
            s.push(root);
            root = root->left;
        }
        else
        {
            if (s.empty())
                break;
            root = s.top();
            s.pop();
            cout << root->data << " ";
            root = root->right;
        }
    }
}

void preOrderTraversal(node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void preOrderTraversalIterative(node *root)
{
    stack<node *> s;
    while (true)
    {
        if (root != NULL)
        {
            cout << root->data << " ";
            s.push(root);
            root = root->left;
        }
        else
        {
            if (s.empty())
                break;
            root = s.top();
            s.pop();
            root = root->right;
        }
    }
}

void postOrderTraversal(node *root)
{
    if (root == NULL)
        return;

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

void postOrderTraversalIterative(node *root)
{
    stack<node *> s;
    s.push(root);
    stack<int> out;
    while (!s.empty())
    {
        node *curr = s.top();
        s.pop();

        out.push(curr->data);

        if (curr->left)
        {
            s.push(curr->left);
        }

        if (curr->right)
        {
            s.push(curr->right);
        }
    }
    while (!out.empty())
    {
        int data = out.top();
        out.pop();
        cout << data << " ";
    }
    cout << endl;
}

void levelOrderBuild(node *&root){
    cout << "Enter root data: " << endl;
    int d;
    cin >> d;
    root = new node(d);

    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        int leftData;
        cout << "Enter data for left node of " << temp->data << endl;
        cin >> leftData;
        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        int rightData;
        cout << "Enter data for right node of " << temp->data << endl;
        cin >> rightData;
        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

int main()
{
    node *root = NULL;
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << "Level order traversal: " << endl;
    levelOrderTraversal(root);

    cout << "In Order traversal: " << endl;
    inOrderTraversal(root);
    cout << endl;

    cout << "Pre Order traversal: " << endl;
    preOrderTraversal(root);
    cout << endl;

    cout << "Post Order traversal: " << endl;
    postOrderTraversal(root);
    cout << endl;

    node *root2 = NULL;
    levelOrderBuild(root2);
    cout << "Level order traversal: " << endl;
    levelOrderTraversal(root2);

    reverseLevelOrder(root2);
    return 0;
}