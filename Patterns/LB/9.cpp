#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 1;
    int n;
    cin >> n;
    int count = 1;
    int temp = i;
    while (temp <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i << " ";
            j++;
            i++;
        }
        cout << endl;
        temp++;
    }
    // while (i <= n)
    // {
    //     int j = 1;
    //     count = i;
    //     while (j <= i)
    //     {
    //         cout << count << " ";
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    return 0;
}