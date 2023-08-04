#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

vector<int> nextSmallerEl(int *arr, int n)
{
    vector<int> ans(n);
    stack<int> st;
    st.push(-1);
    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (st.top() != -1 && arr[st.top()] >= curr)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

vector<int> prevSmallerEl(int *arr, int n)
{
    vector<int> ans(n);
    stack<int> st;
    st.push(-1);
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        while (st.top() != -1 && arr[st.top()] >= curr)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

int largestRectangleArea(int *heights, int n)
{

    vector<int> next;
    next = nextSmallerEl(heights, n);

    vector<int> prev;
    prev = prevSmallerEl(heights, n);
    int area = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int newArea;
        int length = heights[i];
        if (next[i] == -1)
        {
            next[i] = n;
        }
        int breadth = next[i] - prev[i] - 1;
        newArea = length * breadth;
        area = max(area, newArea);
    }
    return area;
}
int maxArea(int M[MAX][MAX], int n, int m)
{
    int area = largestRectangleArea(M[0], m);
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (M[i][j] != 0)
            {
                M[i][j] = M[i][j] + M[i - 1][j];
            }
            else
                M[i][j] = 0;
        }
        area = max(area, largestRectangleArea(M[i], m));
    }
    return area;
}

int main(){
    return 0;
}