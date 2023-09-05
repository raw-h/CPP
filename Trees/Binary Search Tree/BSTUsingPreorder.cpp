#include <bits/stdc++.h> 
using namespace std;

class BinaryTreeNode {
       public : 
        int data;
        BinaryTreeNode *left;
        BinaryTreeNode *right;
        BinaryTreeNode(int data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
        ~BinaryTreeNode() {
            if (left){
                delete left;
            }
            if (right){
                delete right;
            }
        }
    };

BinaryTreeNode* createTree(vector<int> &preorder, int mini, int maxi, int &i){
    if(i >= preorder.size())
        return NULL;
    
    if(preorder[i] < mini || preorder[i] > maxi)
        return NULL;

    BinaryTreeNode* root = new BinaryTreeNode(preorder[i++]);

    root->left = createTree(preorder, mini, root->data, i);
    root->right = createTree(preorder, root->data, maxi, i);

    return root;
}


BinaryTreeNode* preorderToBST(vector<int> &preorder) {
    int mini = INT_MIN;
    int maxi = INT_MAX;
    int i = 0;
    
    BinaryTreeNode* root = createTree(preorder, mini, maxi, i);
    return root;
}

int main(){
    return 0;
}