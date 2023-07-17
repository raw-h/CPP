#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int *arr, int size, int i){
    if(size == 0 || size == 1 || i >= size)
        return ;
    int j = i - 1;
    int temp = arr[i];
    while(j >= 0){
        if(arr[j] > temp)
            arr[j + 1] = arr[j];
        else
            break;
        j--;
    }
    arr[j + 1] = temp;
    i++;
    insertion_sort(arr, size, i);
}

int main(){
    int n;
    cin >> n;
    int * arr = new int[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int i = 1;
    insertion_sort(arr, n, i);
    for(i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}