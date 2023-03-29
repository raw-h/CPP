#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 0;
        while (j < i)
        {
            cout << char('A' + n - i + j) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}