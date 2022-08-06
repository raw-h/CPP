#include<bits/stdc++.h>
using namespace std;

void kadane(int arr[], int n){
    int currSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if (currSum < 0)
            currSum = 0;
        maxSum = max(currSum, maxSum);
    }
    cout << maxSum << endl;
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    kadane(arr, n);    
    return 0;
}