#include<bits/stdc++.h>
using namespace std;

void select_sort(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j <= size; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
        cout << arr[i] << " " ;
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    select_sort(arr, n);
    return 0;
}