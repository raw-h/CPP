#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int data)
    {
        value = data;
        next = NULL;
    }
};

class Queue
{
    Node *head;
    Node *tail;

public:
    Queue()
    {
        head = NULL;
        tail = NULL;
    }

    bool isEmpty()
    {
        if (head == NULL)
            return true;
        else
            return false;
    }

    void enqueue(int data)
    {
        Node *temp = new Node(data);
        if (head == NULL)
        {
            head = temp;
            tail = temp;
            return;
        }
        else
        {
            tail->next = temp;
            tail = temp;
            return;
        }
    }

    int dequeue()
    {
        if (head == NULL)
            return -1;
        int ans = head->value;
        Node *temp = head;
        head = head->next;
        return ans;
    }

    int front()
    {
        if (head == NULL)
            return -1;
        else
            return head->value;
    }
};

int main(){
    return 0;
}