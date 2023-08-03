#include <bits/stdc++.h>
using namespace std;
void atBottom(stack<int> &myStack, int x)
{
    if (myStack.empty())
    {
        myStack.push(x);
        return;
    }
    int val = myStack.top();
    myStack.pop();
    atBottom(myStack, x);
    myStack.push(val);
}
stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    atBottom(myStack, x);
    return myStack;
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

void reverseStack(stack<int> &stack)
{
    if (stack.empty())
    {
        return;
    }
    int val = stack.top();
    stack.pop();
    reverseStack(stack);
    pushAtBottom(stack, val);
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
    reverseStack(st);
    print(st);
    return 0;
}