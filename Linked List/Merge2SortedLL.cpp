#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Node
{
public:
    T data;
    Node *next;

    Node(T data)
    {
        next = NULL;
        this->data = data;
    }

    ~Node()
    {
        if (next != NULL)
        {
            delete next;
        }
    }
};

Node<int>* solve(Node<int> *first, Node<int> *second)
{
    if (first->next == NULL)
    {
        first->next = second;
        return first;
    }

    Node<int> *curr1 = first;
    Node<int> *next1 = curr1->next;

    Node<int> *curr2 = second;
    Node<int> *next2 = curr2->next;

    while (next1 != NULL && curr2 != NULL)
    {
        if ((curr2->data >= curr1->data) && (curr2->data <= next1->data))
        {
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;
            curr1 = curr2;
            curr2 = next2;
        }
        else{
            curr1 = next1;
            next1 = next1->next;
            if(next1 == NULL){
                curr1->next = curr2;
                return first;
            }
        }
    }
    return first;
}

Node<int> *sortTwoLists(Node<int> *first, Node<int> *second)
{
    if (first == NULL)
        return second;
    if (second == NULL)
        return first;

    if (first->data <= second->data)
        solve(first, second);
    else
        solve(second, first);
}

void print(Node<int> *head)
{
    Node<int> *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node<int> n1(1);
    Node<int> n2(3);
    Node<int> n3(5);
    Node<int> n4(7);
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = NULL;
    cout << "Printing List 1 = " << endl;
    print(&n1);
    Node<int> n5(2);
    Node<int> n6(4);
    Node<int> n7(6);
    Node<int> n8(8);
    n5.next = &n6;
    n6.next = &n7;
    n7.next = &n8;
    n8.next = NULL;
    cout << "Printing List 2 = " << endl;
    print(&n5);

    cout << "printing the merged list " << endl;
    print(sortTwoLists(&n1, &n5));
    return 0;
}