#include <bits/stdc++.h>
using namespace std;
bool findRedundantBrackets(string &s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
            st.push(ch);
        else
        {
            if (ch == ')')
            {
                bool redundant = true;
                while (st.top() != '(')
                {
                    char top = st.top();
                    if (top == '+' || top == '-' || top == '*' || top == '/')
                        redundant = false;
                    st.pop();
                }
                if (redundant)
                    return true;
                st.pop();
            }
        }
    }
    return false;
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

int main(){
    string str;
    cin >> str;

    bool answer = findRedundantBrackets(str);
    cout << answer << endl;
    return 0;
}