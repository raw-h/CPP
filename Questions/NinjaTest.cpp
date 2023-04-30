#include <bits/stdc++.h>
using namespace std;

bool isPossibleSoln(vector<int> &arr, int days, long long seconds)
{
    int dayCount = 1;
    int timeSum = 0;
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        if (timeSum + arr[i] <= seconds)
            timeSum += arr[i];
        else
        {
            dayCount++;
            timeSum = arr[i];
        }
    }
    return dayCount <= days;
}

int main()
{
    int m;
    cin >> m;
    int start = INT_MIN;
    long long end = 0;
    vector<int> time;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        time.push_back(x);
        end += time[i];
        start = max(start, time[i]);
    }
    
    int n;
    cin >> n;
    int mid;
    int ans;
    bool flag = 1;
    
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (isPossibleSoln(time, n, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    cout << ans << endl;
    return 0;
}