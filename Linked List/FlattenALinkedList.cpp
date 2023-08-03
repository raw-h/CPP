#include <bits/stdc++.h>
using namespace std;

struct Node
{
public:
    int data;
    struct Node *next;
    struct Node *bottom;

    Node(int x)
    {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};

Node *solve(Node *first, Node *second)
{
    if (first->bottom == NULL)
    {
        first->bottom = second;
        return first;
    }

    Node *curr1 = first;
    Node *next1 = curr1->bottom;

    Node *curr2 = second;
    Node *next2 = curr2->bottom;

    while (next1 != NULL && curr2 != NULL)
    {
        if ((curr2->data >= curr1->data) && (curr2->data <= next1->data))
        {
            curr1->bottom = curr2;
            next2 = curr2->bottom;
            curr2->bottom = next1;
            curr1 = curr2;
            curr2 = next2;
        }
        else
        {
            curr1 = next1;
            next1 = next1->bottom;
            if (next1 == NULL)
            {
                curr1->bottom = curr2;
                return first;
            }
        }
    }
    cout << "Reached 2" << endl;
    return first;
}

void printList2(Node *Node)
{
    while (Node != NULL)
    {
        cout << Node->data << " ";
        Node = Node->bottom;
    }
}

Node *flatten(Node *root)
{
    if (root->next == NULL)
    {
        return root;
    }
    cout << "Reached 1" << endl;
    root->next = flatten(root->next);
    root = solve(root,root->next);
    return root;
}

int main(){
    Node n1(5);
    Node n2(7);
    Node n3(8);
    Node n4(30);
    Node n5(10);
    Node n6(20);
    Node n7(19);
    Node n8(22);
    Node n9(50);
    Node n10(28);
    Node n11(35);
    Node n12(40);
    Node n13(45);

    n1.next = &n5;
    n5.next = &n7;
    n7.next = &n10;

    n1.bottom = &n2;
    n2.bottom = &n3;
    n3.bottom = &n4;

    n5.bottom = &n6;

    n7.bottom = &n8;
    n8.bottom = &n9;

    n10.bottom = &n11;
    n11.bottom = &n12;
    n12.bottom = &n13;

    // printList1(&n1);
    cout << endl;
    Node * result = flatten(&n1);
    printList2(result);
    cout << endl;
    return 0;
}