#include <bits/stdc++.h>
using namespace std;

void selection_sort(int *arr, int size, int i){
    if (size == 0 || size == 1 || i >= size)
        return;
    int minIndex = i;
    for(int j = i + 1; j < size; j++){
        if(arr[minIndex] > arr[j])
            minIndex = j;
        swap(arr[i], arr[minIndex]);
    }
    i++;
    selection_sort(arr, size, i);
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int i = 0;
    selection_sort(arr, n, i);
    for(i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}