#include <bits/stdc++.h>
using namespace std;
class SpecialStack
{
    stack<int> st;
    int mini;

public:
    void push(int data)
    {
        if (st.empty())
        {
            mini = data;
            st.push(data);
        }
        else
        {
            if (data < mini)
            {
                st.push(2 * data - mini);
                mini = data;
            }
            else
            {
                st.push(data);
            }
        }
    }

    void pop()
    {
        if (st.empty())
            return;

        int curr = st.top();
        st.pop();
        if (curr > mini)
            return;
        else
        {
            int prevMin = mini;
            int val = 2 * mini - curr;
            mini = val;
            return;
        }
    }

    int top()
    {
        if (st.empty())
            return -1;

        int curr = st.top();
        if (curr < mini)
            return mini;
        else
            return curr;
    }

    int getMin()
    {
        if (st.empty())
            return -1;
        return mini;
    }
};

int main(){
    return 0;
}