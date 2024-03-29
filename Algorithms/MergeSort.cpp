/*
We will be given an array and we have to sort it using merge sort.
First we have to find the mid of the array, and break the array into two halves and then find mid of each half, we keep on doing it till the whole
    array is broken into single elements.
Then we merge the elements and combine them and merge them untill the whole array is merged.
This sorting technique is known to be the best sorting technique.
*/

#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // To copy values in the halved arrays.
    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }
    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    // Merge 2 sorted arrays.
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex] = first[index1];
            index1++;
            mainArrayIndex++;
        }
        else
        {
            arr[mainArrayIndex] = second[index2];
            index2++;
            mainArrayIndex++;
        }
    }
    while (index1 < len1)
    {
        arr[mainArrayIndex] = first[index1];
        index1++;
        mainArrayIndex++;
    }
    while (index2 < len2)
    {
        arr[mainArrayIndex] = second[index2];
        index2++;
        mainArrayIndex++;
    }

    // Make sure to delete the dynamically allocated arrays first & second.
    delete []first;
    delete []second;
}

void mergeSort(int *arr, int s, int e)
{
    // Base Case
    if (s >= e)
        return;

    int mid = (s + e) / 2;
    // Left Part
    mergeSort(arr, s, mid);

    // Right Part
    mergeSort(arr, mid + 1, e);

    // Merge the sorted parts
    merge(arr, s, e);
}

int main()
{
    int arr[5] = {2, 5, 1, 6, 9};
    int n = 5;

    mergeSort(arr, 0, n - 1);

    for(auto it: arr){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}