#include <bits/stdc++.h>
using namespace std;

struct Stack
{
public:
    queue<int> q1;
    queue<int> q2;
    int data;

    void s_push(int data)
    {

        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }

        q1.push(data);

        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }

    int s_pop()
    {
        if (q1.empty())
            return -1;
        else
        {
            int val = q1.front();
            q1.pop();
            return val;
        }
    }
};

int main()
{
    Stack s1;
    s1.s_push(10);
    s1.s_push(20);
    s1.s_push(30);
    s1.s_push(40);
    s1.s_push(50);

    cout << s1.s_pop() << endl;
    cout << s1.s_pop() << endl;
    cout << s1.s_pop() << endl;
    cout << s1.s_pop() << endl;
    cout << s1.s_pop() << endl;

    cout << s1.s_pop() << endl;

    return 0;
}