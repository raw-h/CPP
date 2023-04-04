#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr1.push_back(x);
    }
    int m;
    cin >> m;
    vector<int> arr2;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        arr2.push_back(x);
    }

    vector<int> answer;
    int i = 0, j = 0;
    while(i < n && j < m){
        if(arr1[i] == arr2[j]){
            answer.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j])
            i++;
        else
            j++;
    }
    for(auto it: answer){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}