#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data: " << value << endl;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}

void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count != (position - 1))
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
    Node *toInsert = new Node(data);
    toInsert->next = temp->next;
    temp->next = toInsert;
}

void deleteNode(Node *&head, int position, Node *&tail)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        if (curr->next == NULL)
        {
            tail = prev;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

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

int main()
{
    Node *node1 = new Node(88);
    // Node *node2 = new Node(89);
    // node1->next = node2;
    print(node1);

    insertAtHead(node1, 5); // Insert at Head.
    print(node1);

    Node *head = new Node(10);
    Node *tail = head; // Insert at Tail
    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    print(head);

    insertAtPosition(head, tail, 25, 3);
    insertAtPosition(head, tail, 5, 1);
    insertAtPosition(head, tail, 15, 3);
    insertAtPosition(head, tail, 35, 7);
    print(head);

    cout << "Head = " << head->data << " Tail = " << tail->data << endl;

    deleteNode(head, 3, tail);
    print(head);
    deleteNode(head, 3, tail);
    print(head);
    cout << "Head = " << head->data << " Tail = " << tail->data << endl;
    deleteNode(head, 5, tail);
    print(head);
    cout << "Head = " << head->data << " Tail = " << tail->data << endl;
    return 0;
}