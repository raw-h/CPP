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

Node *getMiddle(Node *&head)
{
    Node *fast = head->next;
    Node *slow = head;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL)
            fast = fast->next;
        slow = slow->next;
    }
    return slow;
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
    Node *head = new Node(1);
    Node *n1 = new Node(2);
    Node *n2 = new Node(3);
    Node *n3 = new Node(4);
    Node *n5 = new Node(5);
    Node *n6 = new Node(4);
    Node *n7 = new Node(3);
    Node *n8 = new Node(2);
    Node *n9 = new Node(1);

    head->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n5;
    n5->next = n6;
    n6->next = n7;
    n7->next = n8;
    n8->next = n9;

    print(head);
    Node *middle = getMiddle(head);
    cout << middle->data << endl;
    return 0;
}