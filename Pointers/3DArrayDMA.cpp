#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, o;
    cin >> m >> n >> o;
    int *arr = new int[m * n * o];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < o; k++)
                cin >> *(arr + (i * n * o) + (j * o) + k);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < o; k++)
                cout << *(arr + (i * n * o) + (j * o) + k) << " ";
            cout << endl;
        }
        cout << endl;
    }
    delete[] arr;
    return 0;
}