#include<bits/stdc++.h>
using namespace std;

int findPivot(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid;
    while (start < end)
    {
        mid = start + ((end - start) / 2);
        if (arr[mid] >= arr[0])
            start = mid + 1;
        else if (arr[mid] < arr[0])
            end = mid;
    }
    return end;
}

int binary_search(vector<int> &arr, int start, int end, int k)
{
    int mid;
    while (start <= end)
    {
        mid = start + ((end - start) / 2);
        if (arr[mid] == k)
            return mid;
        else if (arr[mid] > k)
            end = mid - 1;
        else if (arr[mid] < k)
            start = mid + 1;
    }
    return -1;
}

int search(vector<int> &arr, int n, int k)
{
    int pivot = findPivot(arr);
    cout << "Pivot element = " << arr[pivot] << endl;
    if (k <= arr[pivot - 1] && k >= arr[0]){
        cout << "Arr[0] = " << arr[0]<< " Arr[pivot - 1] = " << arr[pivot - 1] << endl;
        return binary_search(arr, 0, pivot - 1, k);
    }
    else if (k >= arr[pivot] && k <= arr[n - 1]){
        cout << "Arr[pivot] = " << arr[pivot] << " & Arr[n - 1] = " << arr[n - 1] << endl;
        return binary_search(arr, pivot, n - 1, k);
    }
    else
        return -1;
}

int main(){
    int n;
    cin >> n;
    vector<int>arr;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int target;
    cin >> target;
    int answer = search(arr, n, target);
    cout << answer << endl;
    return 0;
}