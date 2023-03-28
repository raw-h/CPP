#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 0;
    int n;
    cin >> n;
    int count = 0;
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            cout << char('A' + count) << " ";
            j++;
            count++;
        }
        cout << endl;
        i++;
    }
    return 0;
}