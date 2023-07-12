#include<bits/stdc++.h>
using namespace std;

bool linearSearch_recursion(int* arr, int size, int k){
    if(size == 0){
        return false;
    }
    if(arr[size - 1] == k){
        cout <<"Index = " << size - 1 << endl;
        return true;
    }
    return linearSearch_recursion(arr, size - 1, k);
}
int main(){
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++)
        cin >> *(arr + i);
    
    int key;
    cin >> key;

    bool isPresent = linearSearch_recursion(arr, n, key);
    if(!isPresent){
        cout <<"Element is not present." << endl;
    }
    return 0;
}