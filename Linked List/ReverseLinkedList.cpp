#include <bits/stdc++.h>
using namespace std;

class LinkedListNode
{
public:
    int data;
    LinkedListNode *next;
    LinkedListNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void rev(LinkedListNode *&head, LinkedListNode *prev, LinkedListNode *curr)
{
    if (curr == NULL)
    {
        head = prev;
        return;
    }
    LinkedListNode *forward(curr->next);
    curr->next = prev;
    rev(head, curr, forward);
}

LinkedListNode *reverseLinkedList(LinkedListNode *head)
{
    LinkedListNode *prev(NULL);
    LinkedListNode *curr(head);
    // while(curr != NULL){
    //     LinkedListNode<int>* forward(curr->next);
    //     curr->next = prev;
    //     prev = curr;
    //     curr = forward;
    // }
    // return prev;
    rev(head, prev, curr);
    return head;
}

void print(LinkedListNode *head)
{
    LinkedListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    LinkedListNode n1(6);
    LinkedListNode n2(5);
    LinkedListNode n3(4);
    LinkedListNode n4(3);
    LinkedListNode n5(2);
    LinkedListNode n6(1);
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = &n6;
    print(&n1);
    print(reverseLinkedList(&n1));
    return 0;
}