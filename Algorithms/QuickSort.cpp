/*
In quick sort an array is given and it is sorted in a manner that, an element is taken, and is put in it's right position,
i.e a position where all the elements to it's left are smaller to it, and all the elements to it's right are greater than it.
The way quick sort works is that it first does partition of left and right by putting one element to its right place, and then does the same for all the elements recursively.

Partitioning:-
    1. First you need to take and element called pivot, it is the element that will be put in its right place.
    2. Then count all elements less than the pivot element.
    3. Now shift pivot to its right position, i.e start + count.
    4. Then we need to make so that all the elements on the left of pivot are less than pivot element and on the right are greater than pivot.
    5. For correcting the left and right arrays we will take 2 pointers one at start and other at the end and if the element at right is smaller than pivot
       then it is swapped with the element on the left side and then the pointers are incremented and decremented by 1.
    6. After doing all these steps we will call quicksort recursively for the left part and the right part.
*/

#include <bits/stdc++.h>
using namespace std;

int partition(int *arr, int start, int end)
{
    int pivot = arr[start];

    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (pivot >= arr[i])
            count++;
    }
    int pivot_index = start + count;
    swap(arr[start], arr[pivot_index]);

    int i = start;
    int j = end;

    while (i < pivot_index && j > pivot_index)
    {
        while (arr[i] < arr[pivot_index])
            i++;
        while (arr[j] > arr[pivot_index])
            j--;
        if (i < pivot_index && j > pivot_index)
            swap(arr[i++], arr[j--]);
    }
    return pivot_index;
}

void quickSort(int *arr, int start, int end)
{
    if (start >= end)
        return;

    int p = partition(arr, start, end);
    quickSort(arr, start, p - 1);
    quickSort(arr, p + 1, end);
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int s = 0;
    int e = n - 1;

    quickSort(arr, s, e);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}