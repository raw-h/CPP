#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data, Node *next, Node *prev)
    {
        this->data = data;
        this->prev = prev;
        this->next = next;
    }
};

Node *removeDuplicates(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *curr = head;
    while (curr != NULL)
    {
        if ((curr->next != NULL) && curr->data == curr->next->data)
        {
            Node *to_delete = curr->next;
            Node *to_point = curr->next->next;
            delete (curr->next);
            curr->next = to_point;
            if (to_point != NULL)
                to_point->prev = curr;
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}

Node * createLL(Node* &head, int n){
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        Node temp(x);
        head->next = &temp;
    }
    return head;
}
int main(){
    return 0;
}