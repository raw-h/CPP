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

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
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

Node * minVal(Node * root){
    Node * temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

Node *maxVal(Node *root)
{
    Node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

Node * deleteNode(Node * root, int data){
    if(root == NULL)
        return NULL;
    
    if(root->data == data){
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        else if(root->left != NULL && root->right == NULL){
            Node * temp = root->left;
            delete root;
            return temp;
        }
        else if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if(root->left != NULL && root->right != NULL){
            // int mini = minVal(root->right)->data;
            // root->data = mini;
            // root->right = deleteNode(root->right, mini);
            
            int maxi = maxVal(root->left)->data;
            root->data = maxi;
            root->left = deleteNode(root->left, maxi);
        }
    }
    else if(root->data < data){
        root->right = deleteNode(root->right, data);
        return root;
    }
    else if(root->data > data){
        root->left = deleteNode(root->left, data);
        return root;
    }
}

int main()
{
    Node *root = NULL;

    takeInput(root);

    cout << "Printing the BST: " << endl;
    levelOrderTraversal(root);

    root = deleteNode(root, 140);
    cout << "Printing the BST: " << endl;
    levelOrderTraversal(root);
    return 0;
}