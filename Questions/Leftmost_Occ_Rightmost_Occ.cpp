#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int left, right, mid, start = 0, end = n - 1, key;
    cin >> key;
    while (start <= end)
    {
        mid = (start / 2 + end / 2) + 1;
        if (arr[mid] == key)
        {
            left = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }
    cout << "Leftmost occurance at " << left + 1 << endl;
    start = 0, end = n - 1;
    while (start <= end)
    {
        mid = (start / 2 + end / 2) + 1;
        if (arr[mid] == key)
        {
            right = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }
    cout << "Rightmost occurance at " << right + 1 << endl;
    return 0;
}