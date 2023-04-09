#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool flag = 0;
    int start = 0, mid, end = n - 1;
    int key;
    cin >> key;
    int position;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if(arr[mid] == key){
            flag = 1;
            position = mid;
            break;
        }
        if (arr[mid] > key){
            if(arr[start] > key)
                start = mid + 1;
            else
                end = mid;
        }
        else
            start = mid + 1;
    }
    if(flag)
        cout << "Element found at position " << position << endl;
    else
        cout << "Element not found." << endl;
    return 0;
}