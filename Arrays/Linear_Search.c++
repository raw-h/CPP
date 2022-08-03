#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int size, int key){
    for (int i = 0; i < size; i++)
        if (arr[i] == key)
            return (i+1);
    return -1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int key;
    cin >> key;
    int index = linear_search(arr, n, key);
    cout << "Searched element is present at " << index << endl;
    return 0;
}