#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    
    int r_start = 0, r_end = n - 1;
    int c_start = 0, c_end = m - 1;
    while (r_start <= r_end && c_start <= c_end)
    {
        for (int i = c_start; i <= c_end; i++)
            cout << arr[r_start][i] << " ";
        r_start++;

        for (int i = r_start; i <= r_end; i++)
            cout << arr[i][c_end] << " ";
        c_end--;

        for (int i = c_end; i >= c_start; i--)
            cout << arr[r_end][i] << " ";
        r_end--;

        for (int i = r_end; i >= r_start; i--)
            cout << arr[i][c_start] << " ";
        c_start++;
    }
    return 0;
}