#include <bits/stdc++.h>
using namespace std;

bool isPossibleSoln(vector<int> &arr, int k, int limit)
{
    int painters = 1;
    int boards_painted = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (boards_painted + arr[i] <= limit)
            boards_painted += arr[i];
        else
        {
            painters++;
            boards_painted = arr[i];
        }
    }
    return (painters <= k);
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int start = INT_MIN;
    int end;
    int mid;
    int size = boards.size();
    for (int i = 0; i < size; i++)
    {
        start = max(start, boards[i]);
        end += boards[i];
    }
    int ans;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (isPossibleSoln(boards, k, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> board;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        board.push_back(x);
    }
    int k;
    cin >> k;
    int answer = findLargestMinDistance(board, k);
    cout << answer << endl;
    return 0;
}