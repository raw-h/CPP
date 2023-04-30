#include <bits/stdc++.h>
using namespace std;

bool isPossibleSoln(vector<int> &arr, int mid, int student){
    int stud = 1;
    int pageSum = 0;
    for(int i = 0; i < arr.size(); i++){
        if(pageSum + arr[i] <= mid)
            pageSum += arr[i];
        else{
            stud++;
            if(stud > student || arr[i] > mid)
                return false;
            pageSum = arr[i];
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
        sum += x;
    }
    int stu;
    cin >> stu;
    int start = 0;
    int end = sum;
    int mid, ans;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if(isPossibleSoln(nums, mid, stu)){
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    cout << "Min possible distribution is:- " << ans << endl;
    return 0;
}