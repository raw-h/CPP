#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    vector<int> ans(n);
    stack<int> st;
    st.push(-1);
    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (st.top() >= curr)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(curr);
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> vec;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        vec.push_back(x);
    }
    vector<int>ans = nextSmallerElement(vec, n);
    for(auto it: ans){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}