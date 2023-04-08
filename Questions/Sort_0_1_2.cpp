#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }

    int curr = 0;
    int left = 0;
    int right = n - 1;
    while(curr <= right){
        if(v1[curr] == 0){
            swap(v1[curr], v1[left]);
            curr++;
            left++;
        }
        else if(v1[curr] == 1){
            curr++;
        }
        else{
            swap(v1[curr], v1[right]);
            right--;
        }
    }
/*
    int count_0 = 0;
    int count_1 = 0;
    int count_2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (v1[i] == 0)
            count_0++;
        else if (v1[i] == 1)
            count_1++;
        else
            count_2++;
    }
    int i = 0;
    while (count_0 != 0)
    {
        v1[i] = 0;
        i++;
        count_0--;
    }
    while (count_1 != 0)
    {
        v1[i] = 1;
        i++;
        count_1--;
    }
    while (count_2 != 0)
    {
        v1[i] = 2;
        i++;
        count_2--;
    }

*/
    for(auto it: v1){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}