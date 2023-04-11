#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int mini = INT_MAX, maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < mini)
            mini = arr[i];
        if (arr[i] > maxi)
            maxi = arr[i];
    }
    int cows;
    cin >> cows;
    int space = maxi - mini;
    int start = 0, end = space, mid;
    sort(arr, arr + n);
    int final_ans;
    bool flag = 0;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int cow_count = 1;
        int last_pos = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (arr[i] - last_pos >= mid)
            {
                cow_count++;
                final_ans = mid;
                if (cow_count == cows)
                {
                    flag = 1;
                    break;
                }
                last_pos = arr[i];
            }
        }
        if(flag)
            start = mid + 1;
        else
            end = mid - 1;
    }
    cout << final_ans << endl;
    return 0;
}