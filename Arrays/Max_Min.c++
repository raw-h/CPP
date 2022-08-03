#include<bits/stdc++.h>
using namespace std;

void max_min(int arr[], int size){
    int max_num = INT_MIN;
    int min_num = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        // if (arr[i] > max)
        //     max = arr[i];
        // if (arr[i] < min)
        //     min = arr[i];
        max_num = max(max_num, arr[i]);
        min_num = min(min_num, arr[i]);
    }
    cout << "Maximum number in this array is :- " << max_num << "\nMinimum in this array is :- " << min_num << endl;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    max_min(arr, n);
}