#include<bits/stdc++.h>
using namespace std;

queue<int> modifyQueue(queue<int> q, int k)
{
    stack<int> st;
    for (int i = 0; i < k; i++)
    {
        st.push(q.front());
        q.pop();
    }

    for (int i = 0; i < k; i++)
    {
        q.push(st.top());
        st.pop();
    }

    int t = q.size() - k;

    while (t--)
    {
        q.push(q.front());
        q.pop();
    }
    return q;
}

int main(){
    return 0;
}