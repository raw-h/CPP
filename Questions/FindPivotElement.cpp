#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int start = 0, mid, end = n - 1;
    while(start < end){
        mid = start + (end - start)/2;
        if(arr[mid] >= arr[start])
            start = mid + 1;
        else
            end = mid;
    }
    cout <<"Pivot element found at position "<< start << endl;
    return 0;
}