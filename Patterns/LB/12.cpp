#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 0;
    int n;
    cin >> n;
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            cout << char('A' + j) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}