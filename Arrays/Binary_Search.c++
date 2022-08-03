#include <bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int size, int key)
{
    int start = 0;
    int end = size;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
            return (mid + 1);
        else if (arr[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int key;
    cin >> key;
    int index = linear_search(arr, n, key);
    if (index != -1)
        cout << key << " found at index :- " << index << endl;
    return 0;
}