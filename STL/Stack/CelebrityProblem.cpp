#include<bits/stdc++.h>
using namespace std;

int celebrity(vector<vector<int>> &M, int n)
{
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        s.push(i);
    }

    while (s.size() > 1)
    {
        int a = s.top();
        s.pop();

        int b = s.top();
        s.pop();

        if (M[a][b] == 1)
        {
            s.push(b);
        }
        else
        {
            s.push(a);
        }
    }
    int p_candidate = s.top();

    int row_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (M[p_candidate][i] == 0)
            row_count++;
    }
    int col_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (M[i][p_candidate] == 1)
            col_count++;
    }

    if (row_count == n && col_count == (n - 1))
        return p_candidate;
    else
        return -1;
}

int main(){
    vector<vector<int>> matrix;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        vector<int> temp;
        for(int j = 0; j < n; j++){
            int x;
            cin >> x;
            temp.push_back(x);
        }
        matrix.push_back(temp);
    }

    int answer = celebrity(matrix, n);
    cout << answer << endl;
    return 0;
}