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
Node *removeDuplicates(Node *head)
{

    if (head == NULL)
    {
        return NULL;
    }
    unordered_map<int, bool> markmap;
    Node *curr = head;
    Node *prev;
    while (curr != NULL)
    {
        if (markmap[curr->data] == false)
        {
            markmap[curr->data] = true;
            prev = curr;
            curr = curr->next;
        }
        else
        {
            prev->next = curr->next;
            delete (curr);
        }
        curr = prev->next;
    }
    return head;
}

int main(){
    return 0;
}