/*
It is the type of tree where the data/values in the left sub tree is always less than the data/value in the root node,
and the data/values in the right sub tree is always greater than that of the root node.
*/

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

void levelOrderTraversal(Node * root){
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node * temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty())
                q.push(NULL);
        }
        else{
            cout << temp->data << " ";
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
}

Node *insertIntoBST (Node * root, int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }

    if(data > root->data){
        root->right = insertIntoBST(root->right, data);
    }

    if(data < root->data){
        root->left = insertIntoBST(root->left, data);
    }
    return root; 
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;
    while(data != -1){
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

int main()
{
    Node * root = NULL;

    takeInput(root);

    cout << "Printing the BST: " << endl;
    levelOrderTraversal(root);
    return 0;
}