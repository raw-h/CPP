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

    ~Node(){
        int value = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout << "Memory free for node with data: " << value << endl;
    }
};

void insertAtFirst(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&tail, Node *&head, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int d, int position)
{
    if (position == 1)
    {
        insertAtFirst(head, tail, d);
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
        insertAtTail(tail, head, d);
        return;
    }
    Node *toInsert = new Node(d);
    toInsert->next = temp->next;
    temp->next->prev = toInsert;
    toInsert->prev = temp;
    temp->next = toInsert;
}

void deleteNode(Node *&head, int position, Node *&tail)
{
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
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
        curr->prev = NULL;
        curr->next = NULL;
        delete curr;
    }
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

int getLength(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    Node *node1 = new Node(100);
    Node *node3 = node1;
    insertAtFirst(node1, node3, 200);
    insertAtFirst(node1, node3, 300);
    print(node1);
    cout << "Head: " << node1->data << " Tail: " << node3->data << endl;
    
    Node *node2 = new Node(400);
    Node *tail = node2;
    insertAtTail(tail, node2, 600);
    print(node2);
    cout << "Head: " << node2->data << " Tail: " << tail->data << endl;
    
    insertAtPosition(node2, tail, 500, 2);
    print(node2);
    cout << "Head: " << node2->data << " Tail: " << tail->data << endl;
    
    insertAtPosition(node2, tail, 399, 1);
    print(node2);
    cout << "Head: " << node2->data << " Tail: " << tail->data << endl;
    
    insertAtPosition(node2, tail, 601, 5);
    print(node2);
    cout << "Head: " << node2->data << " Tail: " << tail->data << endl;

    deleteNode(node2, 1, tail);
    print(node2);
    cout << "Head: " << node2->data << " Tail: " << tail->data << endl;

    deleteNode(node2, 4, tail);
    print(node2);
    cout << "Head: " << node2->data << " Tail: " << tail->data << endl;

    deleteNode(node2, 2, tail);
    print(node2);
    cout << "Head: " << node2->data << " Tail: " << tail->data << endl;
    return 0;
}