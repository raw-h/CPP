#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int *arr;
    int rear;
    int q_front;
    int size;

public:
    Queue()
    {
        size = 100001;
        arr = new int[size];
        q_front = 0;
        rear = 0;
    }

    bool isEmpty()
    {
        if (q_front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int data)
    {
        if (rear == size)
            return;
        arr[rear] = data;
        rear++;
    }

    int dequeue()
    {
        if (q_front == rear)
            return -1;
        int ans = arr[q_front];
        arr[q_front] = -1;
        q_front++;
        if (q_front == rear)
        {
            q_front = 0;
            rear = 0;
        }
        return ans;
    }

    int front()
    {
        if (q_front == rear)
            return -1;
        else
            return arr[q_front];
    }
};

int main(){
    
    return 0;
}