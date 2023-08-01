#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};
class Stack
{
    /*
    int size;
    int *arr;
    int top;
    public:
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int data){
        if(size - top > 1){
            top++;
            arr[top] = data;
        }
        else{
            cout << "Stack Overflow" << endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout << "Stack Underflow" << endl;
        }
    }

    int peek(){
        if(top >= 0)
            return arr[top];
        else{
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool empty(){
        if(top == -1)
            return true;
        else
            return false;
    }
    */

public:
    Node *top;

    Stack()
    {
        this->top = NULL;
    }

    void push(int value)
    {
        Node *new_Node = new Node(value);
        new_Node->next = top;
        top = new_Node;
    }

    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            Node *temp = top;
            top = top->next;
            delete (temp);
        }
    }

    int peek()
    {
        if (top == NULL)
        {
            cout << "Stack Underflow ";
            return -1;
        }
        else
        {
            cout << "Top element: ";
            return top->data;
        }
    }

    bool empty()
    {
        if (top == NULL)
        {
            cout << "Stack is empty" << endl;
            return true;
        }
        else
        {
            cout << "Stack is not empty" << endl;
            return false;
        }
    }
};

int main()
{
    /*
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    cout << "Top element " << st.peek() << endl;

    st.pop();
    cout << "Top element " << st.peek() << endl;

    st.pop();
    cout << "Top element " << st.peek() << endl;

    st.pop();
    cout << "Top element " << st.peek() << endl;

    st.pop();
    cout << "Top element " << st.peek() << endl;

    st.pop();
    cout << "Top element " << st.peek() << endl;
    st.pop();
    cout << "Top element " << st.peek() << endl;
    */

    Stack st;
    st.push(1);
    st.push(9);
    st.push(10);

    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;
    return 0;
}