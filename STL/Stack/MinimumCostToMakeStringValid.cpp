#include <bits/stdc++.h>
using namespace std;
int findMinimumCost(string str)
{
    if (str.length() % 2 == 1)
        return -1;
    stack<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (ch == '{')
            st.push(ch);
        else
        {
            if (!st.empty() && st.top() == '{')
                st.pop();
            else
                st.push(ch);
        }
    }
    int a = 0, b = 0;
    while (!st.empty())
    {
        if (st.top() == '}')
            a++;
        else
            b++;
        st.pop();
    }
    int ans = (a + 1) / 2 + (b + 1) / 2;
    return ans;
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
    string str;
    cin >> str;

    int answer = findMinimumCost(str);
    cout << answer << endl;
    return 0;
}