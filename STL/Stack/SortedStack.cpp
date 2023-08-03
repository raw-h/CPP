#include <bits/stdc++.h>
using namespace std;

void sortedInsert(stack<int> &s, int value)
{
    if (s.empty() || (s.top() < value))
    {
        s.push(value);
        return;
    }
    int val = s.top();
    s.pop();
    sortedInsert(s, value);
    s.push(val);
}

void print(stack<int> inputStack)
{
    while (!inputStack.empty())
    {
        cout << inputStack.top() << " ";
        inputStack.pop();
    }
    cout << endl;
}

void sortStack(stack<int> &stack)
{
    if (stack.empty())
        return;

    int top = stack.top();
    stack.pop();
    sortStack(stack);
    sortedInsert(stack, top);
}

int main()
{
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    print(st);
    sortStack(st);
    print(st);
    return 0;
}