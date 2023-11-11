#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

int countNode(struct Node* root){
    if(root == NULL)
        return true;
    
    int ans = 1 + countNode(root->left) + countNode(root->right);
    return ans;
}

bool isCBT(struct Node* root, int index, int count){
    if(root == NULL){
        return true;
    }
    if(index >= count){
        return false;
    }
    else{
        bool left = isCBT(root->left, 2 * index + 1, count);
        bool right = isCBT(root->right, 2 * index + 2, count);
        return (left && right);
    }
}

bool isMaxHeap(struct Node* root){
    if(root->left == NULL && root->right == NULL || root->right == NULL)
        return true;
    else{
        bool left = isMaxHeap(root->left);
        bool right = isMaxHeap(root->right);

        return (left && right && (root->data > root->left->data && root->data > root->right->data));
    }
}

bool isHeap(struct Node* tree){
    int totalNodes = countNode(tree);
    int index = 0;

    if(isCBT(tree, index, totalNodes) && isMaxHeap(tree))
        return true;
    else
        return false;
}

int main(){
    return 0;
}