#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    int prevDiff = arr[1] - arr[0];
    int currarr = 2;
    int ans = 2;

    for (int i = 2; i < n; i++)
    {
        if (prevDiff == arr[i] - arr[i-1])
            currarr++;
        else{
            prevDiff = arr[i] - arr[i-1];
            currarr = 2;
        }
        ans = max(ans, currarr);
    }
    cout << ans << endl;
    return 0;
}