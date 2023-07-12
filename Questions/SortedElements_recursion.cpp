#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int size){
    if(size == 0 || size == 1)
        return true;
    if(arr[0] > arr[1])
        return false;
    else{
        bool yes = isSorted(arr + 1, size - 1);
        return yes;
    }
}
int main(){
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> *(arr + i);
    }
    bool answer = isSorted(arr, n);

    if(answer)
        cout << "Array is sorted." << endl;
    else
        cout << "Array is not sorted." << endl;
    return 0;
}