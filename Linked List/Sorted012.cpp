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
};

// void sortList(Node *&head)
// {
//     int zeroes = 0;
//     int ones = 0;
//     int twos = 0;
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         if (temp->data == 0)
//             zeroes++;
//         else if (temp->data == 1)
//             ones++;
//         else if (temp->data == 2)
//             twos++;
//         temp = temp->next;
//     }
//     temp = head;
//     while (zeroes != 0)
//     {
//         temp->data = 0;
//         zeroes--;
//         temp = temp->next;
//     }
//     while (ones != 0)
//     {
//         temp->data = 1;
//         ones--;
//         temp = temp->next;
//     }
//     while (twos != 0)
//     {
//         temp->data = 2;
//         twos--;
//         temp = temp->next;
//     }
// }

void insertAtT(Node *& tail, Node *&curr){
    tail->next = curr;
    tail = tail->next;
}

Node * sortList(Node *& head){
    Node *zeroHead = new Node(-1);
    Node *oneHead = new Node(-1);
    Node *twoHead = new Node(-1);

    Node *zeroTail = zeroHead;
    Node *oneTail = oneHead;
    Node *twoTail = twoHead;

    Node * temp = head;
    while(temp != NULL){
        if(temp->data == 0)
            insertAtT(zeroTail, temp);
        else if(temp->data == 1)
            insertAtT(oneTail, temp);
        else if(temp->data == 2)
            insertAtT(twoTail, temp);
        temp = temp->next;
    }

    if(oneHead->next != NULL){
        zeroTail->next = oneHead->next;
        oneTail->next = twoHead->next;
        twoTail->next = NULL;
    }
    else{
        zeroTail->next = twoHead->next;
        twoTail->next = NULL;
    }


    head = zeroHead->next;
    delete(zeroHead);
    delete(oneHead);
    delete(twoHead);

    return head;
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
    Node *n1 = new Node(0);
    Node *n2 = new Node(0);
    Node *n3 = new Node(2);
    Node *n4 = new Node(2);
    Node *n5 = new Node(0);
    Node *n6 = new Node(0);
    Node *n7 = new Node(2);
    Node *n8 = new Node(0);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next = n7;
    n7->next = n8;

    print(n1);

    print(sortList(n1));
    return 0;
}