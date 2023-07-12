#include <bits/stdc++.h>
using namespace std;
int sum_arr(int *arr, int size)
{
    if(size == 0)
        return 0;
    if(size == 1)
        return arr[0];
    int sum = arr[0] + sum_arr(arr + 1, size - 1);
    return sum;
}

int main()
{
    int n;
    cin >> n;
    int * arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> *(arr + i);
    }
    int sum = sum_arr(arr, n);
    cout << sum << endl;
    return 0;
}