#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    int S;
    cin >> S;

    int st = 0;
    int end = 1;
    
    int sum = arr[st];

    while (st < n && end <= n)
    {
        if (sum == S)
        {
            cout << st+1 << " " << end << endl;
            return 0;
        }
        else if(sum > S)
        {
            sum -= arr[st];
            st++;
        }
        else
        {
            sum += arr[end];
            end++;
        }
    }
    
    return 0;
}