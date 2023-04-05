#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int ans = 0;
    for(int i = 0; i < arr.size(); i++){
        ans = ans ^ arr[i];
    }
    for(int i = 1; i < arr.size(); i++){
        ans = ans ^ i;
    }
    cout << ans << endl;
    return 0;
}