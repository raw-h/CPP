#include <bits/stdc++.h>
using namespace std;

bool isPossibleToPlace(vector<int> stalls, int cows, int gap){
    int cowCount = 1;
    int lastPosition = stalls[0];
    for(int i = 0; i < stalls.size(); i++){
        if(stalls[i] - lastPosition >= gap){
            cowCount++;
            if(cowCount == cows)
                return true;
            lastPosition = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> stalls, int k)
{
    int start = 0;
    int end = -1;
    for (int i = 0; i < stalls.size(); i++)
        end = max(end, stalls[i]);

    int mid;
    int ans;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if(isPossibleToPlace(stalls, k, mid)){
            ans = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> stalls;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        stalls.push_back(x);
    }
    int cows;
    cin >> cows;
    int answer = aggressiveCows(stalls, cows);
    cout << answer << endl;
    return 0;
}