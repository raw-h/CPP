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
    int z;
    cin >> z;
    print(st);
    st = pushAtBottom(st, z);
    print(st);
    return 0;
}