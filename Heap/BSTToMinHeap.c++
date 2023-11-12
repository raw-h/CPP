#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node * left;
    Node * right;

    Node(int d){
        data = d;
        left = right = NULL;
    }
};

void inOrderT(Node * root, vector<int> arr){
    if(root == NULL){
        return;
    }

    inOrderT(root->left, arr);
    arr.push_back(root->data);
    inOrderT(root->right, arr);
}

void BSTtoMinHeap(Node * root, vector<int> arr, int index){
    if(root == NULL)
        return;
    
    root->data = arr[index++];
    BSTtoMinHeap(root->left, arr, index);
    BSTtoMinHeap(root->right, arr, index);
}

void preOrderT(Node * root){
    if(root == NULL)
        return;
    
    cout << root->data << " ";
    preOrderT(root->left);
    preOrderT(root->right);
}

int main(){
    return 0;
}