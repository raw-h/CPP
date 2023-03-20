#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for node with data: " << value << endl;
    }
};

void insertNode(Node *&tail, int element, int data)
{
    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node *&node100, int data)
{
    if (node100 == NULL)
    {
        cout << "List is empty, please check again." << endl;
        return;
    }
    else
    {
        Node *prev = node100;
        Node *curr = prev->next;

        while (curr->data != data)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        if (curr == prev)
        {
            node100 = NULL;
        }
        if (node100 == curr)
        {
            node100 = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *node1)
{
    if (node1 == NULL)
    {
        cout << "List is empty" << endl;
    }
    Node *temp = node1;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (node1 != temp);
    cout << endl;
}

int main()
{
    Node *n1 = NULL;
    insertNode(n1, 10, 3);
    print(n1);

    insertNode(n1, 3, 4);
    print(n1);

    insertNode(n1, 4, 5);
    print(n1);

    insertNode(n1, 5, 6);
    print(n1);

    insertNode(n1, 6, 2);
    print(n1);

    insertNode(n1, 6, 7);
    print(n1);

    insertNode(n1, 2, 1);
    print(n1);

    deleteNode(n1, 6);
    print(n1);
    return 0;
}