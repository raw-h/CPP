#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, o;
    cin >> n >> m >> o;
    int m1[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> m1[i][j];
    
    int m2[m][o];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < o; j++)
            cin >> m2[i][j];

    int ans[n][o];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < o; j++)
            ans[i][j] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < o; j++)
        {
            for (int k = 0; k < m; k++)
                ans[i][j] += m1[i][k] * m2[k][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < o; j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
    return 0;
}