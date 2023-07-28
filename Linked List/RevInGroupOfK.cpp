#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node() : data(0), next(nullptr) {}
    Node(int x) : data(x), next(nullptr) {}
    Node(int x, Node *next) : data(x), next(next) {}
};

Node *kReverse(Node *head, int k)
{
    int size = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
        size++;
    }
    if (size < k)
        return head;
    if (head == NULL)
        return NULL;

    Node *next = NULL;
    Node *curr = head;
    Node *prev = NULL;
    int count = 0;
    while(curr != NULL && count < k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if(next != NULL){
        head->next = kReverse(next, k);
    }
    return prev;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(5);
    Node *n1 = new Node(4);
    Node *n2 = new Node(3);
    Node *n3 = new Node(7);
    Node *n4 = new Node(9);
    Node *n5 = new Node(2);
    // Node *n6 = new Node(4);
    // Node *n7 = new Node(3);
    // Node *n8 = new Node(2);
    // Node *n9 = new Node(1);
    head->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    // n5->next = n6;
    // n6->next = n7;
    // n7->next = n8;
    // n8->next = n9;

    int k;
    cin >> k;

    print(head);
    cout << endl;
    print(kReverse(head, k));
    return 0;
}