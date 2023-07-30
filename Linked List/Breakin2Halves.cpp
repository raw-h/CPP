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

int getLen(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

vector<Node *> break2Halves(Node *&head)
{
    int total_len = getLen(head);
    int half1_len, half2_len;
    if (total_len % 2 == 0)
    {
        half1_len = total_len / 2;
        half2_len = total_len / 2;
    }
    else
    {
        half1_len = (total_len / 2) + 1;
        half2_len = total_len - half1_len;
    }
    cout << "Half 1 length = " << half1_len << endl;
    cout << "Half 2 length = " << half2_len << endl;
    Node *head1 = head;
    Node *head2;
    Node *temp = head;
    int i = 0;
    while (i < half1_len - 1)
    {
        temp = temp->next;
        i++;
    }
    head2 = temp->next;
    temp->next = head;
    Node *temp2 = head2;
    i = 0;
    while (i < half2_len - 1)
    {
        temp2 = temp2->next;
        i++;
    }
    temp2->next = head2;
    vector<Node *> heads;
    heads.push_back(head1);
    heads.push_back(head2);
    cout << "Head1 = " << head1->data << endl;
    cout << "Head2 = " << head2->data << endl;
    return heads;
}

int main()
{
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);
    Node *n5 = new Node(5);
    Node *n6 = new Node(6);
    Node *n7 = new Node(7);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next = n7;
    n7->next = NULL;

    vector<Node *> answers = break2Halves(n1);

    for (int i = 0; i < answers.size(); i++)
    {
        Node *temp = answers[i];
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (answers[i] != temp);
        cout << endl;
    }
    return 0;
}