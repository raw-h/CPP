#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j <= i)
        {
            cout << char('A' + i + j) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}