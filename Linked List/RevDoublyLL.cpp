#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

void rev(Node *&head, Node *prev, Node *curr)
{
    if (curr == NULL)
    {
        head = prev;
        return;
    }
    Node *forward(curr->next);
    curr->next = curr->prev;
    curr->prev = forward;
    rev(head, curr, forward);
}


void print(Node *head)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << " ";
    cout << endl;
    cout << "Head: " << head->data << " Tail: " << temp->data << endl;
}

int main()
{
    Node *head = new Node(10);
    Node *n1 = new Node(9);
    Node *n2 = new Node(8);
    Node *n3 = new Node(7);
    Node *n4 = new Node(6);
    Node *n5 = new Node(5);
    Node *n6 = new Node(4);
    Node *n7 = new Node(3);
    Node *n8 = new Node(2);
    Node *n9 = new Node(1);

    head->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next = n7;
    n7->next = n8;
    n8->next = n9;

    n1->prev = head;
    n2->prev = n1;
    n3->prev = n2;
    n4->prev = n3;
    n5->prev = n4;
    n6->prev = n5;
    n7->prev = n6;
    n8->prev = n7;
    n9->prev = n8;
    print(head);
    Node * prev(NULL);
    Node*curr(head);
    rev(head, prev, curr);
    print(head);
    return 0;
}