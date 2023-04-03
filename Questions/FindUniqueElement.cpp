#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int unique;
    for(int i = 0; i < n; i += 2){
        if(arr[i] != arr[i + 1]){
            unique = arr[i];
            break;
        }
    }
    cout << unique << endl;
    return 0;
}