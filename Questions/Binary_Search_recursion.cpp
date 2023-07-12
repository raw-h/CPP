#include<bits/stdc++.h>
using namespace std;

bool binarySearch_recursion(int * arr, int start, int end, int key){
    if(start > end)
        return false;

    int mid = start + (end - start)/2;

    if(arr[mid] == key){
        cout <<"Index = " << mid << endl;
        return true;
    }
    if(arr[mid] > key)
        return binarySearch_recursion(arr, start, mid-1, key);
    else if(arr[mid] < key)
        return binarySearch_recursion(arr, mid + 1, end, key);
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> *(arr + i);

    int key;
    cin >> key;

    int s = 0;
    int e = n - 1;
    bool isPresent = binarySearch_recursion(arr, s, e, key);
    if (!isPresent)
    {
        cout << "Element is not present." << endl;
    }
    return 0;
}