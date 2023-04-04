#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    int p;
    cin >> p;
    vector<vector<int>> answer;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v1[i] + v1[j] == p)
            {
                vector<int> temp;
                temp.push_back(min(v1[i], v1[j]));
                temp.push_back(max(v1[i], v1[j]));
                answer.push_back(temp);
            }
        }
    }
    sort(answer.begin(), answer.end());

    for (int i = 0; i < answer.size(); i++)
    {
        for (int j = 0; j < answer[i].size(); j++)
            cout << answer[i][j] << " ";
        cout << endl;
    }
    cout << endl;
    return 0;
}