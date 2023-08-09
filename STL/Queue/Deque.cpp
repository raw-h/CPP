#include <bits/stdc++.h> 
using namespace std;
class Deque
{
    int *arr;
    int front;
    int rear;
    int size;
public:
    Deque(int n)
    {
        size = n;
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    bool pushFront(int x)
    {
        if(isFull())
            return false;
        else if(isEmpty())
            rear = front = 0;
        else if(front == 0 && rear != size-1)
            front = size-1;
        else
            front--;
        arr[front] = x;
        return true;
    }

    bool pushRear(int x)
    {
        if(isFull())
            return false;
        else if(isEmpty())
            rear = front = 0;
        else if(rear == (size - 1) && front != 0)
            rear = 0;
        else
            rear++;
        arr[rear] = x;
        return true;
    }

    int popFront()
    {
        if(isEmpty())
            return -1;
        int ans = arr[front];
        arr[front] = -1;
        if(front == rear)
            front = rear = -1;
        else if(front == (size - 1))
            front = 0;
        else
            front++;
        return ans;
    }

    int popRear()
    {
        if(isEmpty())
            return -1;
        int ans = arr[rear];
        arr[rear] = -1;
        if(front == rear)
            front = rear = -1;
        else if(rear == 0)
            rear = size - 1;
        else
            rear--;
        return ans;
    }

    int getFront()
    {
        if(isEmpty())
            return -1;
        int ans = arr[front];
        return ans;
    }

    int getRear()
    {
        if(isEmpty())
            return -1;
        int ans = arr[rear];
        return ans;
    }

    bool isEmpty()
    {
        if(front == -1)
            return true;
        return false;
    }

    bool isFull()
    {
        if((front == 0 && rear == (size - 1)) || (rear == (front-1)))
            return true;
        return false;
    }
};

int main(){
    return 0;
}