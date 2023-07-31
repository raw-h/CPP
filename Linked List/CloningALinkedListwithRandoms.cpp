#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *arb;

    Node(int x)
    {
        data = x;
        next = NULL;
        arb = NULL;
    }
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

Node *copyList(Node *head)
{
    Node *cloneHead = NULL;
    Node *cloneTail = NULL;

    Node *temp = head;
    while (temp != NULL)
    {
        insertAtTail(cloneHead, cloneTail, temp->data);
        temp = temp->next;
    }

    Node *originalNode = head;
    Node *cloneNode = cloneHead;

    while (originalNode != NULL && cloneNode != NULL)
    {
        Node *next = originalNode->next;
        originalNode->next = cloneNode;
        originalNode = cloneNode->next;
        originalNode = next;

        next = cloneNode->next;
        cloneNode->next = originalNode;
        cloneNode = next;
    }

    originalNode = head;
    while (originalNode != NULL)
    {
        if (originalNode->next != NULL)
        {
            originalNode->next->arb = originalNode->arb ? originalNode->arb->next : originalNode->arb;
        }
        originalNode = originalNode->next->next;
    }

    originalNode = head;
    cloneNode = cloneHead;

    while (originalNode != NULL && cloneNode != NULL)
    {
        originalNode->next = cloneNode->next;
        originalNode = originalNode->next;

        if (originalNode != NULL)
            cloneNode->next = originalNode->next;
        cloneNode = cloneNode->next;
    }
    /*
    map<Node*, Node*> mapping;
    temp = head;
    Node * temp2 = cloneHead;
    while(temp != NULL){
        mapping[temp] = temp2;
        temp = temp->next;
        temp2 = temp2->next;
    }

    temp = head;
    temp2 = cloneHead;
    while(temp != NULL){
        temp2->arb = mapping[temp->arb];
        temp = temp->next;
        temp2 = temp2->next;
    }
    */
    return cloneHead;
}

int main(){
    
    return 0;
}