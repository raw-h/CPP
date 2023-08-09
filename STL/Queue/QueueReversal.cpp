#include<bits/stdc++.h>
using namespace std;

void reverse(queue<int> &q)
{
    if (q.empty())
        return;
    int num = q.front();
    q.pop();
    reverse(q);
    q.push(num);
}
queue<int> rev(queue<int> q)
{
    // reverse(q);
    // return q;

    stack<int> s;
    while (!q.empty())
    {
        int num = q.front();
        q.pop();
        s.push(num);
    }

    while (!s.empty())
    {
        int num = s.top();
        s.pop();
        q.push(num);
    }
    return q;
}

int main(){
    return 0;
}