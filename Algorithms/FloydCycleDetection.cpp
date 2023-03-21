/*
This algorithm is used to detect whether there is a cycle in the Linked List or not. There are various ways in which a question revolving around this algorithm can be asked:
    1. To detect if a cycle is present.
    2. To return the node from which the cycle starts.
    3. To remove the cycle by pointing the node previous to the cycle starting node to NULL.

    And in this program I will create a linked list and try to solve all the 3 questions.
*/

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
};

bool cyclePresent(Node *head)
{
    // If only 1 node is present.
    if (head == NULL || head->next == NULL)
    {
        return false;
    }

    Node *hare = head;
    Node *tortoise = head;
    while (hare != NULL && tortoise != NULL)
    {
        hare = hare->next;
        if (hare != NULL)
            hare = hare->next;
        tortoise = tortoise->next;
        if (tortoise == hare)
            return true;
    }
    return false;
}

Node *cycleStartingNode(Node *head)
{
    // If only 1 node is present.
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *hare = head;
    Node *tortoise = head;
    while (hare != NULL && tortoise != NULL)
    {
        hare = hare->next;
        if (hare != NULL)
            hare = hare->next;
        tortoise = tortoise->next;
        if (tortoise == hare)
        {
            tortoise = head;
            break;
        }
    }
    if (tortoise == head)
    {
        while (tortoise != hare)
        {
            tortoise = tortoise->next;
            hare = hare->next;
        }
    }
    return tortoise;
}

void deleteNode(Node *&head)
{
    Node *startingNode = cycleStartingNode(head);
    Node *temp = startingNode;
    while (temp->next != startingNode)
    {
        temp = temp->next;
    }
    temp->next = NULL;
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
    } while ((node1 != temp) && (temp != NULL));
    cout << endl;
}

int main()
{
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);
    Node *n5 = new Node(5);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n3;

    // To detect whether there is a cycle or not.
    bool isPresent = cyclePresent(n1);
    cout << isPresent << endl;

    // To return the starting index of cycle.
    Node *startsFrom = cycleStartingNode(n1);
    cout << "The cycle starts from: " << startsFrom->data << endl;

    // Deleting the node of cycle start.
    deleteNode(n1);

    // printing the rectified LL.
    print(n1);
    return 0;
}